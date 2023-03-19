n = int(input(n))

from fibonacci_class import Fibonacci

#fibonacci_class.py

class Fibonacci:
    def __init__(self):
        self.cache = [0, 1]
    
    def __call__(self, n):
        #validate the value of n
        if not (ininstance(n, int) and n>=0):
            raise ValueError(f'Positive integer number expeceted, got "{n}"')
        
        #check for computed Fibonacci numbers
        if n < len(self.cache):
            return self.cache[n]
        else:
            # compute and cache the requested Fibonacci number
            fibo_number = self(n - 1) + self(n - 2)
            self.cache.append(fibo_number)

            return self.cache[n]