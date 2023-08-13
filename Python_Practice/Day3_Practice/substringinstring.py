str="ABCDCDC"
sub_str="CDC"
count1=str.count(sub_str)
for i in range(len(str)):
    if str[i:i+len(sub_str)]==sub_str:
        count1+=1
print(count1)


