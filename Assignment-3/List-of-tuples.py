list_of_numbers = [3, 9, 10]

list_of_tuples = [""] * len(list_of_numbers)

for i in range(0, len(list_of_numbers)):
    list_of_tuples[i] = "(" + str(list_of_numbers[i]) + "," + \
        str(list_of_numbers[i] * list_of_numbers[i]) + ")"

print(list_of_tuples)
