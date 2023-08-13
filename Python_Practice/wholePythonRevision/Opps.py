class Employee:
    def __init__(self,firstname,lastname,salary):
        self.firstname=firstname
        self.lastname=lastname
        self.salary=salary
        self.email=firstname +"."+lastname+"@xyz.com"
    pass

emp1=Employee('neha','pal','45,00,000')
emp2=Employee('pallavi','pal','70,00,000')
print(emp1.email)



# decorators
# it is used to update the functionality of some function by passing function 
# as argument and return inner function like this div funtion
def div(a,b):
    print(a/b)  # if a is greater than b then only it work otherwise 
    # it give failure to update that fuctionality we decide to make another function because one function 
    # is used in many other functions so if i changed it get affected


def new_div(func):
    def inner(a,b):
        if a<b:
            a,b=b,a
        return func(a,b)
    return inner
div1= new_div(div)
div1(4,2)


# The filter() function returns an iterator where the items are filtered through
#  a function to test if the item is accepted or not.
def vowel(sequence):
    variable=['a','e','i','o','u']
    ans=filter(lambda x:x in variable,sequence)
    return list(ans)

listt=['a','e','c','d','v']
result=vowel(listt)
print(result)
# The map() function executes a specified function for each item in an iterable.
#  The item is sent to the function as a parameter.

class A:
    @staticmethod
    def fact(number):
        if(number==0 or number==1):
            return 1
        else:
            return number * A.fact(number-1)
    
    def fibonacci(self,number):
        if(number==0 or number==1):
            return number
        else:
            return A.fibonacci(self,number-1)+A.fibonacci(self,number-2)
obj=A()
result=obj.fact(5)
print(result)
result1=obj.fibonacci(5)
print(result1)




