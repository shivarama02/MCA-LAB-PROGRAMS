a = int(input("Enter fisrt number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

if a>b and a>c:
    print(f"{a} is the largest number")
elif b>a and b>c:
    print(f"{b} is the largest number")
else:
    print(f"{c} is the largest number")