# [problem_statement]
# The file_date function creates a new file in the current working directory,
# checks the date that the file was modified, 
# and returns just the date portion of the timestamp in the
# format of yyyy-mm-dd. Fill in the gaps to create a file called
# "newfile.txt" and check the date that it was modified.

# [problem_solving]
import os
import datetime

def file_date(filename):
  os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system")
  #####################################################################
  print(os.getcwd())
  # Create the file in the current directory
  with open(filename, "a+") as f:
    pass
  timestamp = os.path.getmtime(filename)
  # Convert the timestamp into a readable format, then into a string
  timestamp = datetime.datetime.fromtimestamp(timestamp)
  # Return just the date portion 
  # Hint: how many characters are in “yyyy-mm-dd”? 
  return ("{}".format((str(timestamp))[:10]))

print(file_date("newfile.txt")) 
# Should be today's date in the format of yyyy-mm-dd

# deleting the created file
os.remove("newfile.txt")