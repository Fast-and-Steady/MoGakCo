# [problem_statement]
# The new_directory function creates a new directory
# inside the current working directory,

# then creates a new empty file inside the new directory, 
# and returns the list of files in that directory.
 
# Fill in the gaps to create a file "script.py" 
# in the directory "PythonPrograms". 

# [problem_solving]
import os

def new_directory(directory, filename):
  # personalization (personal computer, directories)
  current_dir = "C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system"
  os.chdir(current_dir)
  new_dir = current_dir + "/" + directory
  # Before creating a new directory, check to see if it already exists
  if os.path.isdir(directory) == False:
    # if it does not exist then create the "directory" provided via parameter
    os.mkdir(directory)

  # Create the new file inside of the new directory
  os.chdir(new_dir)
  with open (filename, "a") as file:
    pass
  
  # Return the list of files in the new directory
  file_count = len(os.listdir(new_dir))
  return (file_count)

print(new_directory("PythonPrograms", "script.py"))