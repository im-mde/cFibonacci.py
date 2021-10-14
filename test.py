import cFibonacci
import sys

if __name__ == '__main__':
    
    try:
        print(cFibonacci.fibonacci(int(sys.argv[1])))
    except ValueError:
        print('ValueError: argv[1] must be type int')
