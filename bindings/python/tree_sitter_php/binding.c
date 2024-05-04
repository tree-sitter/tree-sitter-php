#include <Python.h>

typedef struct TSLanguage TSLanguage;

TSLanguage *tree_sitter_php(void);
TSLanguage *tree_sitter_php_only(void);

static PyObject* _binding_language_php(PyObject *self, PyObject *args) {
    return PyLong_FromVoidPtr(tree_sitter_php());
}

static PyObject* _binding_language_php_only(PyObject *self, PyObject *args) {
    return PyLong_FromVoidPtr(tree_sitter_php_only());
}

static PyMethodDef methods[] = {
    {"language_php", _binding_language_php, METH_NOARGS,
     "Get the tree-sitter language for PHP."},
    {"language_php_only", _binding_language_php_only, METH_NOARGS,
     "Get the tree-sitter language for PHP-Only."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_name = "_binding",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = methods
};

PyMODINIT_FUNC PyInit__binding(void) {
    return PyModule_Create(&module);
}
