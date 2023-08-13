from datetime import date
class person:
    leaves=9
    def __init__(self,name,age):
        self.name=name
        self.age=age
    @classmethod
    def change(cls,newleave):
        cls.leaves=newleave
    @staticmethod
    def isAdult(age):
        return age>18
person1=person('neha',21)
print(person1.leaves)
person1.change(23)
print(person1.leaves)
print(person1.age)
print(person.isAdult(21))
