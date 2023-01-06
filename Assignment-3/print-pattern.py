input_string = str("ABCDEFGHIJK")

for i in range(0, 6):
    print(" " * i, input_string[0: (len(input_string) - (2*i))])
