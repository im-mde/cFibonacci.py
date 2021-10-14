from distutils.core import setup, Extension

module = Extension('fibonaccimodule', sources=['cFibonacci/fibonaccimodule.c'])

setup(
    name='fibonaccimodule',
    version='1.0',
    description="Fibonacci C module",
    ext_modules=[module]
)