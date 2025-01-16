rows=int(input("Enter the number of rows: "))
cols=int(input("Enter th number of columns: "))

matrix=[]
print("Enter matrix elements row by row: ")
for i in range(rows):
    row=[]
    for i in range(cols):
        row.append(int(input(f"Enter element at [{i+1}][{i+1}]: ")))
    matrix.append(row)

print("\nThe matrix is: ")
for row in matrix:
    print(row)

transpose=[]
for i in range(rows):
    row=[]
    for j in range(cols):
        row.append(matrix[j][i])
    transpose.append(row)

print("\nThe transpose matrix is: ")
for row in transpose:
    print(row)

lowertriangular=[]
for i in range(rows):
    row=[]
    for j in range(cols):
        if i>=j:
            row.append(matrix[i][j])
        else:
            row.append(0)
    lowertriangular.append(row)

print("\nThe lower triangular matrix is: ")
for row in lowertriangular:
    print(row)

uppertriangular=[]
for i in range(rows):
    row=[]
    for j in range(cols):
        if i<=j:
            row.append(matrix[i][j])
        else:
            row.append(0)
    uppertriangular.append(row)

print("\nThe upper triangular matrix is: ")
for row in uppertriangular:
    print(row)

diagonal=[]
for i in range(rows):
    row=[]
    for j in range(cols):
        if i==j:
            row.append(matrix[i][j])
        else: 
            row.append(0)
    diagonal.append(row)

print("\nThe diagonal matrix is: ")
for row in diagonal:
    print(row)
