class Bank:
    def __init(self,n,name,type):
        self.number=n
        self.name=name
        self.type=type
        self.balance=0
    def deposite(self,amount):
        self.balance+=amount
        print("amount deposited\n balance=",self.balance)
    def withdraw(self,amount):
        if(self.balance<amount):
            print("amount is greater than balance")
        else:
            self.balance-=amount
            print("amount withdrawn\nbalance=",self.balance)
    def details(self):
        print("account number=",self.number)
        print("account name=",self.name)
        print("account type=",self.type)
        print("account balance=",self.balance)
number=int(input("enter the account number"))
name=input("enter the account name")
type=input("enter the type")
b=Bank(number,name,type)
while(1):
    ch=int(input("enter choice"))
    if(ch==1):
        b.details
    elif(ch==2):
        b.withdraw(int(input("enter the amount to withdraw")))
    elif(ch==3):
        b.deposite(int(input("enter the amount to withdraw")))
