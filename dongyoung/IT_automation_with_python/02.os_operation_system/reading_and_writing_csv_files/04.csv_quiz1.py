# [problem statement]
"""
    >>> We're working with a list of flowers and some information about each one. 
    >>> The "create_file" function writes this information to a CSV file. 
    >>> The "contents_of_file" function reads this file into records and 
    >>> returns (the information in a nicely formatted block). 

    >>> Fill in the gaps of the contents_of_file function to turn the data in 
    >>> the CSV file into a dictionary using DictReader.
"""

# [problem solving]
import os
import csv
#################################################################################
# directory set up
os.chdir("C:/Users/dy/Default/ansel/Desktop/dy/1.computer_science/cs_knowledge/python/04.IT_automation_with_python/02.os_operation_system/reading_and_writing_csv_files")

# if csv_file directory does not exists -> create one
if os.path.isdir("./csv_files") == False:
    os.mkdir("./csv_files")
os.chdir("./csv_files")   
#################################################################################

# Create a file with data in it
def create_file(filename):
  with open(filename, "w") as file:
    file.write("name,color,type\n")
    file.write("carnation,pink,annual\n")
    file.write("daffodil,yellow,perennial\n")
    file.write("iris,blue,perennial\n")
    file.write("poinsettia,red,perennial\n")
    file.write("sunflower,yellow,annual\n")

# Read the file contents and format the information about each row
def contents_of_file(filename):
  return_string = ""

  # Call the function to create the file 
  create_file(filename)

  # Open the file
  with open(filename, "r") as flowers:
    # Read the rows of the file into a dictionary
    rows = csv.DictReader(flowers)
    # Process each item of the dictionary
    for row in rows:
      return_string += "a {} {} is {}\n".format(row["color"], row["name"], row["type"])
  return (return_string)

#Call the function
print(contents_of_file("flowers.csv"))