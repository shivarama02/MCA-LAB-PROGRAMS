def n_multiplies(n,num):
    for i in range(1,n+1):
        mul=i*num
        print(f" {i} x {num} = {mul}")

n=int(input("Enter the value of n: "))
num=int(input("Enter the number: "))

n_multiplies(n,num)