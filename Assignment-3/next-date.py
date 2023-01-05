date = int(input("Enter date: "))
month = int(input("Enter month: "))
year = int(input("Enter year: "))

oddMonths = [1, 3, 5, 7, 8, 10, 12]


if month in oddMonths:
    date += 1
    if date > 31:
        date = 1
        month += 1

if month not in oddMonths:
    
    date += 1
    
    if month != 2:
        if date > 30:
            date = 1
            month += 1

    if month == 2:
        
        leap_year = False
        
        if year % 4 == 0:
            if year % 100 == 0:
                if year % 400 == 0:
                    leap_year = True
                else:
                    leap_year = False
            else:
                leap_year = True
        else:
            leap_year = False

        if leap_year:
            if date > 29:
                date = 1
                month += 1
        
        if not leap_year:
            if date > 28:
                date = 1
                month += 1


print("Next date is: ", date, "/", month, "/", year)
