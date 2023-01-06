day = int(input("Enter date (1-31): "))
month = int(input("Enter month (1-12): "))
year = int(input("Enter year (1800-2025): "))

oddMonths = [1, 3, 5, 7, 8, 10, 12]

if day >= 1 and day <= 31 and month >= 1 and month <= 12 and year >= 1800 and year <= 2025:

    if month in oddMonths:
        if month == 12 and day == 31:
            day = 1
            month = 1
            year += 1
        else:
            if day < 31:
                day += 1
            elif day == 31:
                day = 1
                month += 1

    elif month not in oddMonths:

        if month != 2:
            if day == 30:
                day = 1
                month += 1
            elif day < 30:
                day += 1

        elif month == 2:
        
            if day < 28:
                day += 1

            elif day >= 28:

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
                    if day == 29:
                        day = 1
                        month += 1
        
                elif not leap_year:
                    if day == 28:
                        day = 1
                        month += 1


    print("Next date is: ", day, "/", month, "/", year)

else:
    print("Date is not valid!!")