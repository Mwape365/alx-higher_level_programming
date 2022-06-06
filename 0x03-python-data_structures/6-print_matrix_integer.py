#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    for row in matrix:
        seperator = ""
        for col in row:
            print("{:s}{:d}".format(seperator, col, end="")
                    seperator = " "
                print()
