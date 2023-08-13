from abc import ABC,abstractmethod

class abstract_clas(ABC):
    @abstractmethod
    def connect(self):
        print("sbajh")
    @abstractmethod
    def transfer(self):
        pass

class real(abstract_clas):
    def connect(self):
        # print("Connect")
        pass

    def transfer(self):
        print("transfer")

    def bye():
        print("bye")
class real2(abstract_clas):
    def connect(self):
        print("Connect 2")

    def transfer(self):
        print("transfer 3 ")

    def bye():
        print("bye 5")


# abstract_clas.connect()
# abstract_clas.transfer()
obj=real()
obj.connect()
obj.transfer()
obj.bye()
# real_instance.connect()  
# real_instance.transfer() 




# li=[1,2,3,4,5]
# output = lambda x:x+5
# result= [output(x) for x in li]
# print(result)




# def removevowel(str):
#     result=""
#     vowels="aeiouAEIOU"
#     for char in str:
#         if char not in vowels:
#             result+=char
#     return result
# input_strin="one string"
# output=removevowel(input_strin)
# print(output)



