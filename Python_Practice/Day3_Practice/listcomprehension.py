list=[i for i in range(11) if i%2==0]
print(list)

matrix1=[[j for j in range(3)] for i in range(3)]
print(matrix1)
#i,j,k
# n=3 
# x=1
# y=1
# z=2
# output=[[x,y,z]for x in range(x)for y in range(y) for z in range(n) if x+y+z!=n]
# print(output)
x = int(input())
y = int(input())
z = int(input())
n = int(input())
# output=[]
# for i in range (x+1):
#     for j in range (y+1):
#         for k in range (z+1):
#             if(i+j+k!=n):
#                 print(output.append[i,j,k])

output=((i,j,k)for i in range(x+1)for j in range(y+1)for k in range(z+1) if i+j+k!=n)
print(output)