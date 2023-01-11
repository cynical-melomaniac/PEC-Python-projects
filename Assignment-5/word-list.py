input_string = str()

word_list = list()

run_while = True

while(run_while):
    input_string = str(input("Enter a word (Enter /end to end loop, words can be space separated): "))
    for word in input_string.split(" "):
        if (word == "/end"):
            run_while = False
            break
        if (word == ""):
            continue
        word_list.append(word)
    


word_dict = dict()

print("Number of time each item occurs in list: ")
for j in word_list:
    if j in word_dict:
        word_dict[j] += 1
    if j not in word_dict:
        word_dict[j] = 1

print(word_dict)