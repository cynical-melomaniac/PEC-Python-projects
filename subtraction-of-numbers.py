a = input ('Enter a number: ')
b = input ('Enter another number: ')

try:
    a = eval(a)
    b = eval(b)
    
    subtract = a-b
    print(subtract)

except:
    print ("Enter a valid number!")
