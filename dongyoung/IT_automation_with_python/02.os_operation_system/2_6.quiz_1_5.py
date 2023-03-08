# [problem_statement]
# The parent_directory function returns the name of the directory
# that's located just above the current working directory.
# Remember that '..' is a relative path alias that means 
# "go up to the parent directory". 
# Fill in the gaps to complete this function.

# [problem_solving]
import os

def parent_directory():
  # print("current directory", "[{}]".format(os.getcwd()))
  # print("os.pardir", "[{}]".format(os.pardir))
  relative_parent = os.path.join(os.getcwd(), os.pardir)
  return (os.path.abspath(relative_parent))

# print(parent_directory())

# # [problem-solving]
# # chicky-way :)
# # window-version
# import os
# def parent_directory():
#   current_directory = os.getcwd()
#   lst = current_directory.split("\\")
#   res = ""
#   i = 0
#   if (len(lst) == 1):
#     return ("c:\\")
#   while (i < len(lst) -1):
#     res += str(lst[i])
#     if (i != len(lst) - 2):
#       res += "\\"
#     i += 1
#   return (res)
# print(parent_directory())