rows=int(input("Enter number of rows: "))
cols=int(input("Enter number of columns: "))
if rows!=cols:
    print("Both matrices requires same dimensions!")
matrix1=[]
print("Enter elements of first matrix row by row: ")
for i in range(rows):
    row=[]
    for j in range(cols):
        row.append(int(input(f"Enter element at [{i+1}][{i+1}]: ")))
    matrix1.append(row)

matrix2=[]
print("Enter elements of second matrix row by row: ")
for i in range(rows):
    row=[]
    for j in range(cols):
        row.append(int(input(f"Enter element at [{i+1}][{i+1}]: ")))
    matrix2.append(row)

print("The first matrix is: ")
for row in matrix1:
    print(row)

print("The second matrix is: ")
for row in matrix2:
    print(row)

addmatrix=[]
for i in range(rows):
    row=[]
    for j in range(cols):
        row.append(matrix1[i][j]+matrix2[i][j])
    addmatrix.append(row)

print("The added matrix is: ")
for row in addmatrix:
    print(row)