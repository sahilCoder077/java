#include<iostream>
using namespace std;
class ATM{
	
	private:string name;
	private:int pin;
	private:long balance;
	private:long long AcountNumber;
	
	 public:void Menue(){
	 	
	 	 cout<<"\t\t\t-------------------WELCOME ATM---------------------------------\n";
	 	 cout<<"\t\t\t1)create ID\n\t\t\t2)SET PIN\n\t\t\t3)DEPOSITE MONEY\n\t\t\t4)WITHDRAW\n\t\t\t5)CHECK BALANCE\n";
	 	 cout<<"\t\t\t----------------------------------------------------------------\n";
	 	 
	 	 
	 	 int choise;
	 	 
	 	 cout<<"Enter the options number:";
	 	 cin>>choise;
	 	 
	 	 if(choise==1){
	 	 	
	 	 	  cout<<"\t\t\t---------------------------------------\n";
	 	 	  printID();
	 	 	  cout<<"\t\t\t---------------------------------------\n";
		  }else if(choise==2){
		  	    
		  	    cout<<"\t\t\t---------------------------------------\n";
		  	    CreatePin();
		  	    cout<<"\t\t\t---------------------------------------\n";
		  }else if(choise==3){
		  	    
		  	    cout<<"\t\t\t---------------------------------------\n";
		  	    deposite();
		  	    cout<<"\t\t\t---------------------------------------\n";
		  	    
		  }else if(choise==4){
		  	 
		  	    cout<<"\t\t\t---------------------------------------\n";
		  	    withdraw();
		  	    cout<<"\t\t\t---------------------------------------\n";
				  		  	   
		  }else if(choise==5){
		  		  	
		  	    cout<<"\t\t\t---------------------------------------\n";
		  	    checkBalance();
		  	    cout<<"\t\t\t---------------------------------------\n";				  		  	   
		  }		  	 	 
	 }
	 
	public:void printID(){	
	
	        name="SAHIL SANJAY BHOSALE";
		    AcountNumber=60222383512;
		    balance=+;
	 	   cout<<"\t\t\tHOLDER NAME:"<<name<<endl;
	 	   cout<<"\t\t\tBALANCE:"<<balance<<endl;
    	   cout<<"\t\t\tAcountNumber:"<<AcountNumber<<endl;	 	   
	 }
	 
	public:CreatePin(){
	 	
	 	   cout<<"\t\t\tSET YOUR PIN:";
	 	   cin>>pin;
	 	   cout<<"\t\t\tpin set sucessfully!";
	    }
	public:void deposite(){
		
		int userPin;
		long userAmount;
		cout<<"\t\t\tEnter the pin:";
		cin>>userPin;
		
		if(userPin==pin){
			
			  cout<<"\t\t\tEnter the user Amount:";
			  cin>>userAmount;

			  balance+=userAmount;
		}else{
				
			  cout<<"\t\t\tPlease Enter correct pin!";
		}		
     }
     
    public:void withdraw(){
    	
    	  long userAmount;
    	  
    	  cout<<"\t\t\tEnter the withdrawl Amount:500 to 200000:";
    	  cin>>userAmount;
		   	  
    	balance-=userAmount;
	}
	
	public:void checkBalance(){
		
		   cout<<"\t\t\tBalance:"<<balance;		   		   
	}
	  
};
int main(){
	
	ATM  SBI;
	
	int option;
	cout<<"\t\t\t------------ATM------------------\n";
	cout<<"\t\t\tEnter the opration:";
	cin>>option;	
	
    
    while(option--){
    	
	SBI.Menue();
	
   }
}
