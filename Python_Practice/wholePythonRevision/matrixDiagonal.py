NoOfRows=int(input("Enter number of rows: "))
NoOfCol= int(input("Enter number of columns: "))
matrix=[]
for i in range(NoOfRows):
    element=[]
    for j in range(NoOfCol):
        element.append(int(input(f"Enter Element of row {i+1} :")))
    matrix.append(element)


for i in range(NoOfRows):
    for j in range(NoOfCol):
        print(matrix[i][j],end=" ")
    print()


def daigonal(matrix):
    dai=[]
    row=len(matrix)
    column=len(matrix[0])
    if row!=column:
        print("Not possible")
    else:
        for i in range(row):
            for j in range(column):
                if i==j:
                    dai.append(matrix[i][j])
    return dai 


daigonal_ofMatrix=daigonal(matrix)
sum=0
for i in daigonal_ofMatrix:
    sum=sum+i
print("Sum of diagonal : ",sum)



