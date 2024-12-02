num1=int(input("enter a number: "))
num2=int(input("enter another number: "))

print("\n          Menu \n")
print("1. Addition")
print("2. Substration")
print("3. Multiplication")
print("4. Divition\n")

option=int(input("enter the option: "))

if option==1:
    sum=num1+num2
    print(f"{num1} + {num2} = {sum}")
    
elif option==2:
    sub=num1-num2
    print(f"{num1} - {num2} = {sub}")
    
elif option==3:
    multi=num1*num2
    print(f"{num1} * {num2} = {multi}")
    
elif option==4:
    div=num1/num2
    print(f"{num1} / {num2} = {div}")
    
else:
    print("invalid option!")

    
