import math

def convert(decimal, symbols):
    if decimal == 0: return symbols[0]
    if len(symbols) < 2: return "Please give an array of at least two symbols (binary)."
    if decimal < 0: return "converter only operates on positive numbers."
    step = math.floor(math.log(decimal, len(symbols)))
    string = ""
    while step >= 0:
        string += symbols[(decimal // len(symbols)**step) % len(symbols)]
        step -= 1
    return string
