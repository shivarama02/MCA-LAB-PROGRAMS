n1 = int(input("Enter a number: "))
n2 = int(input("Enter another number: "))

while True:
    print("\n-----Menu-----\n")
    print('1. Addition')
    print('2. Substraction')
    print('3. Multiplication')
    print('4. Division')
    print('5. Exit')
    choice = int(input("Enter the choice: "))

    if choice==1:
        sum=n1+n2
        print(f"{n1} + {n2} = {sum}")
    elif choice==2:
        sub=n1-n2
        print(f"{n1} - {n2} = {sub}")
    elif choice==3:
        multi=n1*n2
        print(f"{n1} * {n2} = {multi}")
    elif choice==4:
        if n2==0:
            print(f"the result is infinty")
        else:
            div=n1/n2
            print(f"{n1} / {n2} = {div}")
    elif choice==5:
        print("Exiting...")
        break
    else:
        print("Invalid choice! try again")
