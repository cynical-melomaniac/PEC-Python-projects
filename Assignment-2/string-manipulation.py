#To manipulate the given string in given methods
given_string = "Python is a case sensitive language"

#Length of string
print("Length of string:", len(given_string))

#Reverse string
print("String Reversed:", given_string [::-1])

#Slicing of string
sliced_string = given_string [slice(10,27)]
print("Sliced String is:", sliced_string)

#Replacement of a phrase in string
replaced_string = given_string.replace("a case sensitive", "object oriented")
print("String replaced 'a case sensitive' with 'object oriented' is:", replaced_string)

#Index of substring
print("Index of substring 'a':",given_string.index("a"))

#Remove whitespaces
removed_whitespaces_string = given_string.replace(" ","")
print("String with removed whitespaces:",removed_whitespaces_string)