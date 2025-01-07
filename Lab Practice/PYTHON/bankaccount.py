# 2. Create a Bank account with members account number, name, type of account and balance. Write constructor and methods to deposit at the bank and withdraw an amount from the bank.


class bankaccount:
    MIN_SAVING_BALANCE=1000
    def __init__(self,name,acc_no,acc_type,balance):
        self.name=name
        self.acc_no=acc_no
        self.acc_type=acc_type
        self.balance=balance

    def Display(self):
        print("\nName : ",self.name)
        print("Account number : ",self.acc_no)
        print("Account type : ",self.acc_type)
        print("Balance : ",self.balance)

    def Deposit(self):
        amount=float(input("\nEnter the amount to deposit: "))
        if amount<=0:
            print("Deposite amount must be positive!")
        else:
            self.balance += amount
        print(f"\n{amount} deposited to your account succssefully!")

    def Withdrawal(self):
        amount=float(input("\nEnter the amonut to withdraw: "))
        if amount<=0:
            print("\nWithdrawal amount must be positive!")
        elif self.acc_type == 'savings' and self.balance - amount < self.MIN_SAVING_BALANCE:
            print("\nSavings account must maintain a minimum balance of", self.MIN_SAVING_BALANCE)
        elif self.balance < amount:
            print("\nInsufficeint amonut!")
        else:
            self.balance -= amount
            print(f"\n{amount} withdrawn from your account succssefully!")

name=input("Enter your name : ")
accno=int(input("Enter your account number(xxxx1234) : "))
acctype=input("Enter your account type(savings/current) : ").lower()

while acctype not in ('savings', 'current'):
    print("\nInvalid account type! please enter 'savings' or 'current'")
    acctype=input("Enter your account type(savings/current) : ").lower()

balance=0
account=bankaccount(name,accno,acctype,balance)
account.Display()

while(True):
    print("\n1.Deposite\n2.withdrawal\n3.Exit")
    option=int(input("Enter option: "))
    if option == 1:
        account.Deposit()
        account.Display()
    elif option == 2:
        account.Withdrawal()
        account.Display()
    elif option == 3:
        exit()
    else:
        print("\nInvalid option!")
    
        