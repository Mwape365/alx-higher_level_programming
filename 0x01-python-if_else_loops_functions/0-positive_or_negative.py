#!/usr/bin/python3
import random
number = random.randit(-10, 10)
if number > 0:
    print('{:d}'.format(number) + ' is positive')
elif number == 0:
    print('{:d}'.format(number) + ' is zero')
else:
    print('{:d}'.format(number) + ' is negative')
