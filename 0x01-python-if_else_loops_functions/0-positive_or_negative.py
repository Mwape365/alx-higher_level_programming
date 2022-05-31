#!/usr/bin/python3
import random
number = random.randit(-10, 10)
if number > 0:
    print(f"{:d}" + " is positive")
elif number == 0:
    print(f"{:d}" + " is zero")
else:
    print("{:d}".format(number) + " is negative")
