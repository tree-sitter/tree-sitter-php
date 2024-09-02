"PHP grammar for tree-sitter"

from importlib.resources import files as _files

from ._binding import language_php, language_php_only


def _get_query(name, file):
    query = _files(f"{__package__}.queries") / file
    globals()[name] = query.read_text()
    return globals()[name]


def __getattr__(name):
    if name == "HIGHLIGHTS_QUERY":
        return _get_query("HIGHLIGHTS_QUERY", "highlights.scm")
    if name == "INJECTIONS_QUERY":
        return _get_query("INJECTIONS_QUERY", "injections.scm")
    if name == "TAGS_QUERY":
        return _get_query("TAGS_QUERY", "tags.scm")

    raise AttributeError(f"module {__name__!r} has no attribute {name!r}")


__all__ = [
    "language_php",
    "language_php_only",
    "HIGHLIGHTS_QUERY",
    "INJECTIONS_QUERY",
    "TAGS_QUERY",
]
