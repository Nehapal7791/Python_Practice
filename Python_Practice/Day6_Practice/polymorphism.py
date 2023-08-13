class Bank:  
    def getroi(self):  
        return 10;  
class SBI(Bank):  
    def getroi(self):  
        return 7;  
  
class ICICI(Bank):  
    def getroi(self):  
        return 8;  
b1 = Bank()  
b2 = SBI()  
b3 = ICICI()  
print("Bank Rate of interest:",b1.getroi());  
print("SBI Rate of interest:",b2.getroi());  
print("ICICI Rate of interest:",b3.getroi()); 

class A:

    Company_name ="apple"
    def __init__(self,a=None,b=None):
        self.a=a
        self.b=b

    def add(self):
        if self.a is not None and self.b is None:
            return self.a
        else:
            return self.a + self.b


a=A(4,4)
print(a.add())


# a = 123
# temp = a
# rev = 0

# while a > 0:
#     rem = a % 10
#     rev = (rev * 10) + rem
#     a = a // 10

# if temp == rev:
#     print("yes")
# else:
#     print("no")