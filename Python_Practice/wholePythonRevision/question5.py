# write a function to take list and give first even number from the list
def firstEvenNumber(userList):
    for number in userList:
        if number%2==0:
            return number
    return None
      
no_of_element=int(input("Enter number of element in list"))
userList=[]
for i in range(no_of_element):
    element=int(input(f"Enter element {i+1}:"))
    userList.append(element)
evenNumber=firstEvenNumber(userList)
print(evenNumber)