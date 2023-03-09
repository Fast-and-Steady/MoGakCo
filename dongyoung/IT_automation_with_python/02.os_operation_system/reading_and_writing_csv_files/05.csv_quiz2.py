# [problem statement]
"""
    >>> Using the CSV file of flowers again, 
    >>> fill in the gaps of the contents_of_file function to
    >>> "process the data" without turning it into a dictionary. 
    
    >>> How do you skip over the header record with the field names?
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
    f = open(filename)
    
    # Read the rows of the file
    rows = csv.reader(f)
    # Process each row
    # next(rows) -> another way to skip the header
    for row in rows:
        if (row == ["name", "color", "type"]):
            continue
        name, color, what_type = row
        # Format the return string for data rows only
        return_string += "a {} {} is {}\n".format(color, name, what_type)
    return (return_string)

#Call the function
print(contents_of_file("flowers.csv"))


"""Not quite, contents_of_file returned:
a carnation pink is
annual
a daffodil yellow is perennial
a iris blue is
perennial
a poinsettia red is perennial
a sunflower yellow
is annual

The output should be:
a pink carnation is annual
a yellow daffodil is perennial
a blue iris is perennial
a
red poinsettia is perennial
a yellow sunflower is annual"""
