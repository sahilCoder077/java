class ATM:
    def __init__(self):
       self.pin=0
       self.balance=0
       self.savepin=0;
     
    def menu(self):

        select = input('''
            1) Create Holder data
            2) Deposit balance
            3) Withdraw balance
            4) Check balance
            Please enter your choice: ''')

            
        if select == "1":
            self.createPin()
        elif select == "2":
            self.deposite()
        elif select == "3":
            self.withdraw()
        elif select == "4":
            self.check_balance()
        else:
            print("Invalid option selected.")
            

    
    def createPin(self):
         self.pin=int(input("Set you pin 4 digit:"))
         print("pin create successfully!")
         
         self.savpin=self.pin
               
    def deposite(self):
        
        user=int(input("Enter the pin:"))
        if(user==self.pin):
            userAmount=int(input("Enter the Amount:"))
            
            self.balance+=userAmount
      
    def withdraw(self):
        
        userAmount=int(input("Enter the Amount:"))      
        self.balance-=userAmount
               
    def check_balance(self):    
        print("my balance is:",self.balance)
        

SBI=ATM()
T=int(input())
while(T>0):
     SBI.menu()
     T-=1
