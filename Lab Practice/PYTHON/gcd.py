# def gcd(a,b):
#     while b:
#         a,b = b,a%b
#     return a

import math

n1=int(input("Enter a number: "))
n2=int(input("Enter another number: "))
hfc=math.gcd(n1,n2)
print(f"The gcd of {n1} and {n2} is {hfc}")