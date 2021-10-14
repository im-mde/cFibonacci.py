#define PY_SSIZE_T_CLEAN
#include <Python.h>

static const short FIBONACCIMODULE_MAX_N = 47;

int calculate_fibonacci(short n) 
{
    if (n > FIBONACCIMODULE_MAX_N) {
        return -1;
    }
    else {
        if (n < 2) 
            return n;
        else 
            return calculate_fibonacci(n - 1) + calculate_fibonacci(n - 2);
    }
}

static PyObject* fibonacci(PyObject *self, PyObject *args) 
{
    int n;
    int fib;

    if (!PyArg_ParseTuple(args, "i", &n)) {
        return NULL;
    }

    fib = calculate_fibonacci(n);

    if (fib <= 0)
    {
        PyErr_SetString(PyExc_ValueError, "detected invalid value or " \
            "value that results in integer overflow");
        return NULL;
    }
    else
    {
        return Py_BuildValue("i", fib);
    }
}

static PyMethodDef methods[] = {
    {"fibonacci", fibonacci, METH_VARARGS, "Calculates fibonacci sequence."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "fibonaccimodule",
    "Fibonacci Sequence Module",
    -1,
    methods
};

PyMODINIT_FUNC PyInit_fibonaccimodule(void) 
{
    return PyModule_Create(&module);
}