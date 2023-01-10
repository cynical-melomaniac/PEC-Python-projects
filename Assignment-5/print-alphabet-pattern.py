rows = int(input("Enter number of rows to be input:"))

alphabets = str("ABCDEFGHIJKLMNOPQRSTUVWXYZ")

for i in range(0, rows):
    for j in range(i): 
        print(alphabets[i + j - 1], end="")
    print("")