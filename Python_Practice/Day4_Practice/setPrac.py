

n=int(input())
x=set(map(int,input().split()))
num_commands=int(input())
for _ in range (num_commands):
    command,*value=input().split()
    value=int(value[0])
    if command=="pop":
        x.pop()
    elif command=="remove":
        x.remove(value)
    elif command=="discard":
        x.discard(value)
print(x)



