# Python Program to Swap Two Elements in a List

def swap(myList,position1,position2):
    myList[position1],myList[position2]=myList[position2],myList[position1]
    return myList
userList=[]
number=int(input("Enter Number of element in List: "))
for i in range(number):
    element=input("Enter element:")
    userList.append(element)
print(userList)
pos1=int(input("Enter first position  : "))
pos2=int(input("Enter second position : "))
l=swap(userList,pos1-1,pos2-1)
print(l)