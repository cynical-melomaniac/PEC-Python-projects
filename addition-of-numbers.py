a = input ('Enter a number: ')
b = input ('Enter another number: ')

try:
    a = eval(a)
    b = eval(b)
    
    sum = a+b
    print(sum)

except:
    print ("Enter a valid number!")
