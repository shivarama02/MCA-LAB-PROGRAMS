def pattern(n):
    for i in range(n+1):
        for j in range(i):
            print("*", end=" ")
        print()
    for i in range(n+1):
        for j in range(0,n-i+1):
            print("*", end=" ")
        print()
pattern(5)