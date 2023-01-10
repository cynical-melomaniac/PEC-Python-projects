integer_set = []

i = 0
while(i < 10):
    integer_set_input = int(input("Enter number: "))
    integer_set.append(integer_set_input)
    i += 1

print("Positive numbers:")
for j in integer_set:
    if (j > 0):
        print(j)

print("Negative numbers")
for j in integer_set:
    if (j < 0):
        print(j)

print("Odd numbers")
for j in integer_set:
    if (j % 2 != 0):
        print(j)

print("Even numbers")
for j in integer_set:
    if (j % 2 == 0):
        print(j)

number_dict = dict()

print("Number of time each item occurs in list")
for j in integer_set:
    if j in number_dict:
        number_dict[j] += 1
    if j not in number_dict:
        number_dict[j] = 1
        
print(number_dict)