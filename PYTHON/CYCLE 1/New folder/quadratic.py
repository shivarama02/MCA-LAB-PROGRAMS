import math
import cmath

a=int(input("Enter the value of a: "))
b=int(input("Enter the value of b: "))
c=int(input("Enter the value of c: "))

rt=(b**2)-(4*a*c)
if rt>0:
    r1=(-b+math.sqrt(rt))/2*a
    r2=(-b-math.sqrt(rt))/2*a
    print(f"the solution is {r1} and {r2}")
elif rt<0:
    r3=(-b+cmath.sqrt(rt))/2*a
    r4=(-b-cmath.sqrt(rt))/2*a
    print(f"the solution is {r3} and {r4}")
elif rt==0:
    r=(-b)/2*a
    print(f"the solution is {r}")

