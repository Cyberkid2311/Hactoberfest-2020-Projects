"""
The Fizz Buzz function must receive a number as parameter
If multiple of 3, return "Fizz" instead of the number. 
If multiple of 5, return "Buzz" instead of the number. 
Numbers which are multiples of both 3 and 5, return "FizzBuzz" instead of the number.
"""


def fizz_buzz(number):
    if number % 3 == 0 and number % 5 == 0:
        resp = 'FizzBuzz'
    elif number % 3 == 0:
        resp = 'Fizz'
    elif number % 5 == 0:
        resp = 'Buzz'
    else:
        resp = number
    return resp
