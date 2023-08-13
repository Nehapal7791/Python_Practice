from collections import namedtuple
#DECLARATION OF NAMED TUPLE 
# student =namedtuple('student_details',['name','age','DOB'])
# S=student('neha','21','2001')
# print(S)
# print(S.name)
# print(S.age)
# print(getattr(S,'DOB'))

#taking input from user of namedtuple and find average of marks in given named tuple
# n=int(input())
# Student = namedtuple('student', input())
# mark_list=[]
# for i in range(n):
#     marks=int(Student(*input().split()).MARKS)
#     mark_list.append(marks)
# output=(sum(mark_list)/n)
# print(format(output,".2f"))

import calendar
import datetime
print(calendar.month(2001, 4))
print(datetime.date)
