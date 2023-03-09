# The create_python_script function creates 
# "a new python script" in the "current working directory", 
# adds the line of comments to it declared  
# by the 'comments' variable, and returns the size of the new file.
# Fill in the gaps to create a script called "program.py".
import os
def create_python_script(filename):
    os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system")
    print("[current directory] ->", os.getcwd())
    comments = "# Start of a new Python program"
    with open(filename, "a") as f:
        f.write(comments)
        print(f.read())
        filesize = os.path.getsize(filename)
    return(filesize)
print(create_python_script("backup"))





# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program# Start of a new Python program