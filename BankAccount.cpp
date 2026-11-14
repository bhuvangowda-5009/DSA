#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    int accNo;
    string name;
    double balance;
    public:
    BankAccount(int a,string n,double b){
        accNo=a;
        name=n;
        balance=b;
    }
    void deposit(double amount){
        if(amount>0){
            cout<<"Amount deposited successfully."<<endl;
            balance+=amount;
        }
        else{
            cout<<"Invalid amount."<<endl;
        }
    }
    void withdraw(double amount){
        if(amount<=balance){
            cout<<"Amount withdrawal successful."<<endl;
            balance-=amount;
        }else{
            cout<<"Insufficient balance.\n";
        }
    }
    void display(){
        cout<<"Account Number: "<<accNo<<endl;
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    ~BankAccount(){
        cout<<"Account  object destoryed successfully."<<endl;
    }
};
int main(){
    int accNo;
    double balance,amount;
    string name;
    cout<<"Enter the accNo for user 1: "<<endl;
    cin>>accNo;
    cout<<"Enter name for user 1: "<<endl;
    cin>>name;
    cout<<"Enter the balance for user 1: "<<endl;
    cin>>balance;
    BankAccount acc1(accNo,name,balance);
    cout<<"Enter the amount to deposit: "<<endl;
    cin>>amount;
    acc1.deposit(amount);
    cout<<"Enter the amount to withdraw: "<<endl;
    cin>>amount;
    acc1.withdraw(amount);
    cout<<"Account summary"<<endl;
    acc1.display();

    cout<<"Enter the accNo for user 2: "<<endl;
    cin>>accNo;
    cout<<"Enter name for user 2: "<<endl;
    cin>>name;
    cout<<"Enter the balance for user 2: "<<endl;
    cin>>balance;
    BankAccount acc2(accNo,name,balance);
    cout<<"Enter the amount to deposit: "<<endl;
    cin>>amount;
    acc2.deposit(amount);
    cout<<"Enter the amount to withdraw: "<<endl;
    cin>>amount;
    acc2.withdraw(amount);
    cout<<"Account summary"<<endl;
    acc2.display();
    return 0;

}