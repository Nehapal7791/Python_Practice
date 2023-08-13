n = int(input())
arr = list(map(int,input().split()))
largest=arr[0]
second=arr[0]
for num in arr:
    if(num>largest):
        second=largest
        largest=num
    elif(num<largest):
        if num>second:
            second=num
print(largest)
print(second)

# n = int(input())
# arr = map(int,input().split())
# output=set(arr)
# maximun=max(output)
# output.remove(maximun)
# maximunn=max(output)
# print(maximunn)