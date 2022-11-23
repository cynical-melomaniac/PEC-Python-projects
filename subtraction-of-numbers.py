#Get input from user
a = input ('Enter a number: ')
b = input ('Enter another number: ')

#Try to use input to evaulate the subtract
try:
    a = eval(a)
    b = eval(b)
    
    subtract = a-b
    print(subtract)

#Throw exception if number is invalid
except:
    print ("Enter a valid number!")
