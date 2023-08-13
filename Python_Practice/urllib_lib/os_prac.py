# s='1'.encode('utf-32')
# print(s.hex())
import os
# def currentpath():
#     cwd=os.getcwd()
#     print(cwd)

# currentpath()
# os.chdir('../') # changing the current working directory
# currentpath()

"""to make dirctory==== mkdir   used os.mkdir and os.mkdirs"""
"""mkdir -> make single directory and throw the erro if the path is not exists"""
"""makedirs->make all intermediate directories requried to make the current directory if not exists"""

# directory="os_re_practice"
# parent_directory="/home/toot/Python_Training/python_training/"
# path=os.path.join(parent_directory,directory)
# os.mkdir(path)


# dir="hello_makedirs"
# parent="/home/toot/Python_Training/python_training/makedirs/"
# mode=0o666
# path1=os.path.join(parent,dir)
# os.makedirs(path1,mode)


"""listing out files and directories in python  -> os.listdir() method in Python is used to get the list of all files and directories in the specified directory. """

# path="/home/toot/"
# directorty_list=os.listdir(path)
# print(" ",directorty_list)
# for file in directorty_list:
    # print(file)

"""Deleting directory or files """
"""os.remove is used to delete the file path this method can not remove the directory is try to delete the directory OSError is raised """

# file="hello.py"
# location="/home/toot/Python_Training/python_training/makedirs"
# path=os.path.join(location,file)
# os.remove(path)

""" os.rmdir is used to delete directory"""
# directoryy="hello_makedirs"
# location="/home/toot/Python_Training/python_training/makedirs/"
# path=os.path.join(location,directoryy)
# os.rmdir(path)

# print(os.name)
""" os.popen used to provide pipe for read and write operation in same file """
fd="hi.txt"
# file = open(fd, 'w')
# more="hello"
# file.write(more)
# file.close()
# file = open(fd, 'r')
# text = file.read()
# print(text)

file = os.popen(fd, 'w')
file.write("Hello")
  