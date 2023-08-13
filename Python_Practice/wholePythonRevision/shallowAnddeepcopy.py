import copy
lst=[1,2,3,[2,23]]
l1=lst
l2=copy.copy(lst)
l3=copy.deepcopy(lst)
l2[3][1]=345
print(lst)
print(l1)
print(l2)
print(l3)