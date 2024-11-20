rows = 5

# Top half
for i in range(1, rows + 1):
    for j in range(i):
        print("*", end=" ")
    print()

# Bottom half
for i in range(rows - 1, 0, -1):
    for j in range(i):
        print("*", end=" ")
    print()
