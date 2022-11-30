#To find out how many minutes and seconds are there in given amount of seconds


try:
    seconds_raw = eval(input("Enter number of seconds: "))

    minutes = int(seconds_raw / 60)
    seconds = seconds_raw % 60

    print(seconds_raw, "seconds have ", minutes, "minutes and ", seconds, "seconds.")

except:
    print ("The data entered is invalid. Exiting Application...")