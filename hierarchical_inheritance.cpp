
#include <iostream>
#include <string>
using namespace std;


class BankAccount {
protected:
    
    string Name;
    double balance;
    int accountNo;
public:
void readDetails();
void displayDetails();
void deposit(double amount);

};


class SavingsAccount : public BankAccount {
public:
     void calculateInterest(double rate);
    
};


class CurrentAccount : public BankAccount {
public:
void withdraw(double amount,double overdraftLimit);
   
};

void BankAccount::readDetails() {
    cout<<"Enter the accountNo:"<<endl;
    cin>>accountNo;
    cout<<"Enter the name:"<<endl;
    cin>>Name;
    cout<<"Enter the balance:"<<endl;
    cin>>balance;

}

void BankAccount::displayDetails() {
    cout<<"AccountNO:" <<accountNo<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"balance:"<<balance<<endl;

    
}

void BankAccount::deposit(double amount) {
    if(amount>0){
        balance=balance+amount;
        cout<<"Amount deposited successfully."<<endl;
        cout<<"Updated amount"<<balance<<endl;
    }else{
        cout<<"Invalid deposit amount."<<endl;
    }
    
}
void SavingsAccount::calculateInterest(double rate) {
    if(rate>=0){
        double interest=balance*rate/100; 
        cout<<"Interest:"<<interest<<endl;
        balance=balance+interest;
        cout<<"Balance after interest"<<endl;
        cout<<balance<<endl;
         
}
else{
    cout<<"Invalid interest rate."<<endl;
}
}


void CurrentAccount::withdraw(double amount, double overdraftLimit) {
    if(amount>0 && overdraftLimit>=0 &&
    amount<=balance+overdraftLimit){
        balance=balance-amount;
        cout<<"Amount withawal successful."<<endl;
        cout<<"updated balacne:"<<balance<<endl;

    }
    else{
        cout<<"Amount exceeded the overdraftlimit."<<endl;
    }
    
}


int main() {
    SavingsAccount savings;
    CurrentAccount current;
    
    double amount,rate, overdraftlimit;
    savings.readDetails();
    savings.displayDetails();
    cout<<"Enter the deposit amount"<<endl;
    cin>>amount;
    savings.deposit(amount);
    cout<<"Enter the rate:"<<endl;
    cin>>rate;
    savings.calculateInterest(rate);
      

    current.readDetails();
    current.displayDetails();
    cout<<"Enter the amount to deposit"<<endl;
    cin>>amount;
    current.deposit(amount);
    cout<<"Enter overdraft amount"<<endl;
    cin>>overdraftlimit;
    cout<<"Enter amount to withdrawal:"<<endl;
    cin>>amount;
    current.withdraw(amount, overdraftlimit);
    
    
    
 
    

    return 0;
}