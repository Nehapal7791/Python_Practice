# taking user input as list and conver element of list to square of every element
# user_input=input("enter list element")
# user_list=user_input.split()
# user_list=list(map(int,user_list))
# squared_list=tuple(map(lambda x:x*x,user_list))
# print(squared_list)

# print(user_list)

# def fun(*args):
#     for i in args:
#         result=sum(i)
#     return result

# print(fun(user_list))
user_input=input("Enter dict element")
user_dict=dict(item.split("=") for item in user_input.split())

def func(**kwargs):
    for key,value in kwargs.items():
        print(key,value)
    print(kwargs.items())

dictt={'neha':'21','pallavi':'19'}
func(**user_dict)

# def why(**kwargs,*args):
# def why(*args,**kwargs):
#     for key,value in kwargs.items():
#         print(key,value)
#     for arg in args:
#         print(arg)
# why(dictt,l)


# class Math:
#   @staticmethod
#   def factorial(number):
#         if number == 0:
#             return 1
#         else:
#             return number * Math.factorial(number - 1)
# fact=Math()  
# fact.factorial(5)
# print(fact)


        
