import os
print("\n--------------------------------------------------------------\n")
os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system")
print(os.getcwd(), "\n")
if (os.path.exists("new_dir") == False):
    os.mkdir("new_dir")
os.chdir("new_dir")
if (os.path.exists("newer_dir") == False):
    print("made [newer_dir] directory")
    os.mkdir("newer_dir")
if (os.path.exists("newer_dir") == True):
    print("deleted [newer_dir] directory", "\n")
    os.rmdir("newer_dir")
print(os.getcwd(), "\n")
dir = "../../02.os_operation_system"
for name in os.listdir(dir):
    print(name)
print()
for name in os.listdir(dir):
    if os.path.isdir(name):
        print(f"{name} is a directory")
    else:
        print(f"{name} is a file")
print()
for name in os.listdir(dir):
    fullname = os.path.join(dir, name)
    if os.path.isdir(fullname):
        print(f"{fullname} is a directory")
    else:
        print(f"{fullname} is a file")
os.chdir("../")
os.rmdir("new_dir")
print("\n--------------------------------------------------------------\n")

# output [o/p]
# C:\Users\dy\Default\ansel\Desktop\dy\1.computer_science\cs_knowledge\python\04.IT_automation_with_python\02.os_operation_system

# made [newer_dir] directory
# deleted [newer_dir] directory

# C:\Users\dy\Default\ansel\Desktop\dy\1.computer_science\cs_knowledge\python\04.IT_automation_with_python\02.os_operation_system\new_dir

# 0.test.py
# 1_1.helloworld.py
# 1_2.areas.py
# 1_3.du_cpu_control.py
# 1_4.automation.py
# 2_0.spider.txt
# 2_1.fd_file_descriptor.py
# 2_2.reading_and_writing_files.ipynb
# 2_3.guests.txt
# 2_4.os_module.py
# 2_5.os_module2.py
# new_dir
# test

# 0.test.py is a file
# 1_1.helloworld.py is a file
# 1_2.areas.py is a file
# 1_3.du_cpu_control.py is a file
# 1_4.automation.py is a file
# 2_0.spider.txt is a file
# 2_1.fd_file_descriptor.py is a file
# 2_2.reading_and_writing_files.ipynb is a file
# 2_3.guests.txt is a file
# 2_4.os_module.py is a file
# 2_5.os_module2.py is a file
# new_dir is a file
# test is a file

# ../../02.os_operation_system\0.test.py is a file
# ../../02.os_operation_system\1_1.helloworld.py is a file
# ../../02.os_operation_system\1_2.areas.py is a file
# ../../02.os_operation_system\1_3.du_cpu_control.py is a file
# ../../02.os_operation_system\1_4.automation.py is a file
# ../../02.os_operation_system\2_0.spider.txt is a file
# ../../02.os_operation_system\2_1.fd_file_descriptor.py is a file
# ../../02.os_operation_system\2_2.reading_and_writing_files.ipynb is a file
# ../../02.os_operation_system\2_3.guests.txt is a file
# ../../02.os_operation_system\2_4.os_module.py is a file
# ../../02.os_operation_system\2_5.os_module2.py is a file
# ../../02.os_operation_system\new_dir is a directory
# ../../02.os_operation_system\test is a file

# --------------------------------------------------------------