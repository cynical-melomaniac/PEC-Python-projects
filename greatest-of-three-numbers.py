a = eval(input("Enter number 1: "))
b = eval(input("Enter number 2: "))
c = eval(input("Enter number 3: "))

if a > b and a > c:
    print(a, "is the greatest")
if b > a and b > c:
    print(b, "is the greatest")
if c > a and c > b:
    print(c, "is the greatest")