# question 1-> sort the dict by key or value
# by using sorted() method of dictionary it return new sorted list
myDict={"1":"Neha","10":"zen","5":"Pallavi"}
print(myDict)
sortedKeys=sorted(myDict.keys())
print(sortedKeys)
sortedValues=sorted(myDict.values())
print(sortedValues)
# 
def sortItem(dictt):
    dictt_items=list(dictt.items())
    n=len(dictt_items)
    for i in range(n):
        for j in range(0,n-i-1):
            if int(dictt_items[j][0])>int(dictt_items[j+1][0]):
                dictt_items[j],dictt_items[j+1]=dictt_items[j+1],dictt_items[j]
        print(f"Pass {i + 1}: {dictt_items}")
    return dictt_items


sorted_items=sortItem(myDict)
for key, value in sorted_items:
    print(key," : ", value)

