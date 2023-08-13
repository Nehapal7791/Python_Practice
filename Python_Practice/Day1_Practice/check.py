num=[1,2,3,45,5]
total=0
for n in num:
    total += n
    if total>0:
        continue
print(total)
print(id(total))
print(type(total))
list=['12',12,9.09]
list.append(1)
print(list.count(12))
print(list)
tuples=(1,2,3)
print(tuples)
set={4,2,72,1}
print(set)

# format method
age=90
age1=0
age2=9
age3=89
age4=9
txt="my age is {} {} {} {} {}"
print(txt.format(age,age1,age2,age3,age4))
