
def pattern(n):
    for i in range(1,n+1):
        for j in range(n-i):
            print(" ", end=" ")
        for k in range(1,2*i):
            print("*", end=" ")
        print()
    for i in range(1,n):
        for j in range(0,i):
            print(" ", end=" ")
        for k in range(1,2*(n-i)):
            print("*", end=" ")
        print()
pattern(5)
