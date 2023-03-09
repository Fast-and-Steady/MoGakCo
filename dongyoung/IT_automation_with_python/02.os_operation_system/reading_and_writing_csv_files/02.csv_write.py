# import modules
import csv
import os

# target directory
os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system/reading_and_writing_csv_files")

# if csv_file directory does not exists -> create one
if os.path.isdir("./csv_files") == False:
    os.mkdir("./csv_files")   

# csv data
hosts = [    
    ["workstation.local", "192.168.25.46"], 
    ["webserver.cloud", "10.2.5.6"],
    ["workstation.local", "192.168.25.46"], 
    ["webserver.cloud", "10.2.5.6"],
    ["workstation.local", "192.168.25.46"], 
    ["webserver.cloud", "10.2.5.6"],
    ["workstation.local", "192.168.25.46"], 
    ["webserver.cloud", "10.2.5.6"]
]

# writerows method
with open("./csv_files/hosts.csv", "w", newline="") as hosts_csv:
    writer = csv.writer(hosts_csv)
    writer.writerows(hosts)

# writerow method
with open("./csv_files/hosts2.csv", "w", newline="") as hosts2_csv:
    writer = csv.writer(hosts2_csv)
    for element in hosts:
        writer.writerow(element)