# cFibonacci.py
Simple fibonacci package to demonstrate Python/C API.

## Linux Setup
For **Linux** run the [setup.py](setup.py) script via the setup script

```python3 setup.py build```

Directories will be created and a shared object (.so) file compiled. To make the
cFibonacci package functional immediately, copy the .so file from build to the 
python package directory cFibonacci. You can check if this has been completed 
properly by running the [test.py](test.py) script.

```python3 test.py 10```

## Python/C API References
* [Extending Python with C or C++](https://docs.python.org/3/extending/extending.html)

* [Python/C API Reference Manual](https://docs.python.org/3/c-api/index.html)

* [Video Tutorial on C Extensions](https://www.youtube.com/watch?v=a65JdvOaygM)