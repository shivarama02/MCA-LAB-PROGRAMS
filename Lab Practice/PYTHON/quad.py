import math

def quadratic(a,b,c):
    d = (b**2)-(4*a*c)
    if d > 0:
        r1 = (-b + math.sqrt(d))/(2*a)
        r2 = (-b - math.sqrt(d))/(2*a)
        print(f"The roots are {r1} and {r2}")
    elif d==0:
        r = (-b)/(2*a)
        print(f"The root is {r}")
    else:
        r = (-b)/(2*a)
        img = math.sqrt(-d)/(2*a)
        print("The roots are imaginary!")
        print(f"{r} + {img}i and {r} - {img}i")

print("quadratic equation : ax^2 + bx + c")
n1=int(input("Enter the value of a: "))
n2=int(input("Enter the value of b: "))
n3=int(input("Enter the value of c: "))

quadratic(n1,n2,n3)