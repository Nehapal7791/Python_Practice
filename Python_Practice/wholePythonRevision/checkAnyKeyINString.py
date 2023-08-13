string="abc"
dictt={"1":"asd","2":"wer","3":"abc"}
for key,value in dictt.items():
    if(value == string):
        print(dictt[key])
    else:
        print("No")

# find common element in three list
list1=[1,4,2,7,8,0]
list2=[4,2,1,4,5,3]
list3=[9,8,3,2,0,7]
def findCommon(list1,list2,list3):
    common=set()
    for element in list1:
        if element in list2 and element in list3:
            common.add(element)
    return common

result=findCommon(list1,list2,list3)
print(result)

def binarystring(listt):
        if listt[i]==0 or listt[i]==1:
            print("Yes list is binary")
        else:
            print("list is not binary")

number=int(input("Enter no of element in list"))
mylist=[]
for i in range(number):
    element=int(input("element of list"))
    mylist.append(element)
print(mylist)
print(binarystring(mylist))




