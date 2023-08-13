# enumerate function helps us to get value, and index both 
# rollno=[1,2,5,6,7]
# for index,roll in enumerate(rollno):
#     print(index,roll)
#     if(index==2):
#         print("abc")

from enum import Enum
class Days(Enum):
     MONDAY = 1
     TUESDAY = 2
     WEDNESDAY = 3
     THURSDAY = 4
     FRIDAY = 5
     SATURDAY = 6
     SUNDAY = 7

print(Days(2).name)
l=list(Days)
print(l)

# from enum import Enum

# Days = Enum('Days', ['MONDAY', 'TUESDAY', 'WEDNESDAY', 'THURSDAY', 'FRIDAY', 'SATURDAY', 'SUNDAY'])

# print(Days(2).name)
# l=list(Days)
# print(l)

