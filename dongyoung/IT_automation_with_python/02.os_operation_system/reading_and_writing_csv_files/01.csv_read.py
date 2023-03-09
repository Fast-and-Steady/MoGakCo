# import modules
import os
import csv 

# target directory
os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system/reading_and_writing_csv_files")

# if csv_file directory does not exists -> create one
if os.path.isdir("./csv_files") == False:
    os.mkdir("./csv_files")    

# open csv file and read it
f = open("./csv_files/data.csv")
csv.reader(f)
csv_f = csv.reader(f)

# variable i -> set to skip the header part of the csv file
i = -1
for row in csv_f:
    name, sex, age, address = row
    i = i + 1
    if (i == 0):
        continue
    print(f"Name: {name}, Sex: {sex}, Age: {age}, Address: {address}")

# close the file when done
f.close()