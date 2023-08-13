file=open("example.txt",'r')
# print(file.read(120))
# print(file.read(10))
# file.seek(0)
# print(file.read(20))

# """read file using for in loop line by line using readlines method and can also able to get line number using enumerator """
# for i , line in enumerate(file.readlines()):
#     print(i,line)
# print(file.close())

content="""Writing files in python is not possible  with read mode so we have to use write mode for writing files"""
filetowrite=open("abc",'w')

filetowrite.write(content)
filetowrite.close()

myfile=open("abc",'r')
print(myfile.read())

file_to_append=open("abc",'a')
more_content="bcnxmaz"
file_to_append.write(more_content)
file_to_append.close()

file_to_append2= open("abc", "r")
print(file_to_append2.read())


with open('one','w') as obj:
    fruits=["mango\n","jnhds\n","njhikdc\n"]
    obj.writelines(fruits)

objtoread=open('one','r')

print(objtoread.read())