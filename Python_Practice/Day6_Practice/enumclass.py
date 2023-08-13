from enum import Enum
# import example_module

# res=example_module.square(3)
# print(res)

class seasons(Enum):
    SPRING=1
    AUTUMN=2
    SUMMER=3
    WINTER=4

#enumeration are iteratble
for mausum in seasons:
    print(mausum.value,"-",mausum.name)
print(seasons.SPRING.name)
print(seasons.SPRING.value)
print(seasons['AUTUMN'].value) #acess value by name
print(seasons(2).name)# access value by value

# #enumeration are allow hashing

# class Animal(Enum):
#     dog=1
#     cat=2
#     lion=3
# di={}
# di[Animal.dog]='bark'
# di[Animal.cat]='meow'
# di[Animal.lion]='roar'
# if di=={Animal.dog:'bark',Animal.cat:'meow',Animal.lion:'roar'}:
#     print("Hashed")
# else:
#     print('no')


# class person:
#     var=6
#     @classmethod
#     def class_method(cls,variable):
#         var=variable
#         return var
    


# s=person.class_method(23)
# print(s)

ls=[1,2,3,4]
dictt={"a":2,"b":3,"c":4,"d":5}
def fun(*args,**kwargs):
    for ar in args:
        print(ar)
    for key,value in kwargs.items():
        d={}
        d.keys[key]
        d.values[value]
        print(d)
fun(ls,dictt)

def fun(**kwargs):
    for key , value in kwargs.items():
        print(key,"=",value)

fun(a=2,b=3,c=4,d=5)

# def fun(num):
#     for i in range(num):
#         yield i

# gen=fun(10)
# print(gen.__next__())
# print(gen.__next__())
# print(gen.__next__())
# print(gen.__next__())
# 2nd method to to get generator







