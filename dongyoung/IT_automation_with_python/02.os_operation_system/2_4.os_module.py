import os
print("\n---------------------------------------------------------------------")
os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system")
if os.path.exists("2_3.guests.txt"):
    print("[2_3.guests.txt] file has been deleted")
    os.remove("2_3.guests.txt")
os.rename("0.test.py", "0.TEST.py")
os.rename("0.TEST.py", "0.test.py")
os.rename("test", "TEST")
os.rename("TEST", "test")
print(os.path.exists("test"))
print(os.path.getsize("test"))
print(os.path.getmtime("test"))
######################################################
import datetime
timestamp = os.path.getmtime("test")
print(datetime.datetime.fromtimestamp(timestamp))
######################################################
print("dir = ", os.path.abspath("test"))
print("\n---------------------------------------------------------------------")

# output [o/p]
# ---------------------------------------------------------------------
# [2_3.guests.txt] file has been deleted
# True
# 12
# 1678105003.0740263
# 2023-03-06 21:16:43.074026
# dir =  C:\Users\dy\Default\ansel\Desktop\dy\1.computer_science\cs_knowledge\python\04.IT_automation_with_python\02.os_operation_system\test
# ---------------------------------------------------------------------