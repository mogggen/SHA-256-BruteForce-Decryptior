import math

def convert(decimal, symbols):
    if decimal == 0: return symbols[0]
    if len(symbols) < 2: return "Please give an array of at least two symbols (binary)."
    if decimal < 0: return "converter only operates on positive numbers.
    step = math.ceil(math.log(decimal, len(symbols)))
    left = True
    string = ""
    while step >= 0:
        bol = symbols[(decimal // len(symbols)**step) % len(symbols)]
        if bol != '0' or (bol == '0' and not left):
            string += bol
            left = False
        step -= 1
    return string

def convert(val, fr, to):
    if decimal == 0: return symbols[0]
    if len(symbols) < 2: return "Please give an array of at least two symbols (binary)."
    if decimal < 0: return "converter only operates on positive numbers.
    step = math.ceil(math.log(decimal, len(symbols)))
    left = True
    string = ""
    while step >= 0:
        bol = symbols[(decimal // len(symbols)**step) % len(symbols)]
        if bol != '0' or (bol == '0' and not left):
            string += bol
            left = False
        step -= 1
    return string
