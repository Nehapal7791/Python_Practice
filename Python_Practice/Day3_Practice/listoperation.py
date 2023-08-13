a="this is a string"
print(type(a))
a=a.split()
print(type(a))
a="-".join(a)
print(a)
print(type(a))

a="asddwdqwdqw"
a=list(a)
a[5]="k"
a="".join(a)
print(a)