#To find subtract of two numbers

#Get input from user
a = input ('Enter a number: ')
b = input ('Enter another number: ')

#Try to use input to evaulate the sum
try:
    a = eval(a)
    b = eval(b)
    
    sum = a+b
    print(sum)

#Throw exception if number is invalid
except:
    print ("Enter a valid number!")
