a="hello good morning"
length=len(a)
dict={}
for i in range(length):
    count=0
    key=a[i]
    for j in range(length):
        if(a[i]==a[j]):
            count=count+1
    dict[key]=count
print(dict)







