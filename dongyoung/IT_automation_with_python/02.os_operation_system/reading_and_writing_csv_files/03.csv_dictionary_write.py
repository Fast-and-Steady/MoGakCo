# import modules
import os
import csv

# directory set up
os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system/reading_and_writing_csv_files")

# if csv_file directory does not exists -> create one
if os.path.isdir("./csv_files") == False:
    os.mkdir("./csv_files")   

# collected data
users = [
    {
        "name": "Sol Mansi",
        "username": "solm",
        "department": "IT infrastructure"
    },
    {
        "name": "Lio Nelso",
        "username": "lion",
        "department": "User Experience Research"
    },
    {
        "name": "Charlie Grey",
        "username": "greyc",
        "department": "Development"
    }     
]

# collected data -> csv file
keys = ["name", "username", "department"]
with open("./csv_files/by_department.csv", "w", newline="") as by_department:
    writer = csv.DictWriter(by_department, fieldnames=keys)
    writer.writeheader()
    writer.writerows(users)