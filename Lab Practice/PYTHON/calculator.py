class claculator:
    def __init__(self,num1,num2):
        self.num1=num1
        self.num2=num2

    def addition(self):
        self.num1+self.num2
        print(f"{self.num1} + {self.num2} = {self.num1+self.num2}")
    
    def substraction(self):
        self.num1-self.num2
        print(f"{self.num1} - {self.num2} = {self.num1-self.num2}")
    
    def multiplication(self):
        self.num1*self.num2
        print(f"{self.num1} x {self.num2} = {self.num1*self.num2}")
    
    def division(self):
        if self.num2==0:
            print("Division cannot be possible(n/0)!")
        else:
            print(f"{self.num1} / {self.num2} = {self.num1/self.num2}")

    def change_number(self):
        self.num1=float(input("Enter a new number: "))
        self.num2=float(input("Enter another new number: "))
        
num1=float(input("Enter a number: "))
num2=float(input("Enter another number: "))

num=claculator(num1,num2)

while(True):
    print("----OPERATIONS----")
    print("\n1.Addition\n2.substraction\n3.multiplication\n4.division\n5.Change numbers\n6.exit\n")
    choice=int(input("Choose operation: "))
    if choice==1:
        num.addition()
    elif choice==2:
        num.substraction()
    elif choice==3:
        num.multiplication()
    elif choice==4:
        num.division()
    elif choice==5:
        num.change_number()
    elif choice==6:
        print("Exiting...")
        break
    else:
        print("Invalid choice!")
