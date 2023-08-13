nestedlist=[]
for _ in range(int(input())):
    name = input()
    score = float(input())
    nestedlist.append([name,score])
print(nestedlist)
nestedlist.sort(key=lambda x: x[1])
print(nestedlist)
lowest_score = nestedlist[0][1]
while  nestedlist[0][1] ==lowest_score:
    nestedlist.pop(0)
output=[]
for i in nestedlist:
    if i[1] == nestedlist[0][1]:
        output.append(i[0])
output.sort()
for i in range(len(output)):
    print(output[i])


