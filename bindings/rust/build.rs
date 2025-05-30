fn main() {
    let root_dir = std::path::Path::new(".");
    let common_dir = root_dir.join("common");
    let php_dir = root_dir.join("php").join("src");
    let php_only_dir = root_dir.join("php_only").join("src");

    let mut c_config = cc::Build::new();
    c_config.std("c11").include(&php_dir);

    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8");

    println!("cargo:rerun-if-changed={}", common_dir.to_str().unwrap());

    for dir in &[php_dir, php_only_dir] {
        let parser_path = dir.join("parser.c");
        let scanner_path = dir.join("scanner.c");
        c_config.file(&parser_path);
        c_config.file(&scanner_path);
        println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());
        println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());
    }

    c_config.compile("tree-sitter-php");
}
