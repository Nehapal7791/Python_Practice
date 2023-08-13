# class MyClass:
#     def my_method(self, x):
#         print("Method with one argument")

#     def my_method(self, x, y):
#         print("Method with two arguments")

# obj = MyClass()
# obj.my_method(5)

no_of_input=int(input())
test_dict={}
result_list=[]
for _ in range(no_of_input):
    key = input("key: ")
    values_str = input("values: ")
    values_list = list(map(int, values_str.split()))
    test_dict[key] = values_list

print(test_dict)

# ---------------------------------approach 1-----------------------------

element = 12345
sum = 0
for digit in str(element):
    sum += int(digit)  
print(sum)

#----------------------------------approach2-------------------------------

element=12345
sum=0
i=element
while(i!=0):
    i1=i%10
    sum+=i1
    i=i//10
print(sum)
