# If you dont want to pass any list of any data type in function so you can pass any number of 
# positinal arguments instead of making list that why args comes in picture

# using list
def sum_of_integer(mylist):
    result=0
    for number in mylist:
        result=result+number
    return result
mylist=[1,5,23,23,1]
sum=sum_of_integer(mylist)
print(sum)

# with positional argument this is args we can use any name args
def sum(*listt):
    print(listt)
    print(type(listt))
listt=[1,3,4,5,5,5,5,5,5]
sum(*listt)

# with keyword arguments **kwargs it 

mylistt=[1,3,4,5,5,5]
a, *b, c =mylistt
print(a)
print(b)
print(c)

# *operator used for unpacking of any iterable object 
def my_sum(*args):
    result=0
    for i in args:
        result+=i
    return result
myList1=[1,2,3,4,5]
mylist2=[3,3,4,1,3]
myList3=[9,0,9,8,3]
print(my_sum(*myList1,*mylist2,*myList3))
