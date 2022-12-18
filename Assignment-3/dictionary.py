student_dict = {}

option = int(10)

while (option != 0):

    data_option = str(input("Enter student data? (Y/N):"))

    if (data_option == "Y"):
        _sid = int(input("Enter SID: "))
        _name = str(input("Enter student name: "))
        student_dict[_sid] = _name

    if (data_option == "N"):

        print("1) Print student details in dictionary")
        print("2) Sort dictionary by student names")
        print("3) Sort dictionary by SID")
        print("4) Search")

        option = int(input("Enter an option: "))

        if (option == 1):
            print(student_dict)
        elif (option == 2):
            print("Dude")
        elif (option == 3):
            print("atleast teach the fucking algo.")
        elif (option == 4):
            _search_sid = int(input("Enter SID to search: "))
            print(student_dict[_search_sid])
