a=input("Enter a string: ")
if len(a) < 2:
    print(a)
else:
    b=a[-1]+a[1:-1]+a[0]
    print(b)