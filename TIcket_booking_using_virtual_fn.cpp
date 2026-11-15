#include<iostream>
using namespace std;
class Ticket{
    public:
    virtual void calculate(){
        cout<<"Fare: "<<endl;
    }
};
class Regular:public Ticket{
    int fare;
    public:
    void calculate(){
         cout<<"Enter the fare amount for regular show: "<<endl;
     cin>>fare;
    cout<<"The fare fare regular show is: "<<fare<<endl;
}
};
class Premium:public Ticket{
    int fare;
    public:
    void calculate(){
            
    cout<<"Enter the fare amount for premium show: "<<endl;
     cin>>fare;
    cout<<"The fare for premium show is: "<<fare<<endl;
}
};
int main(){
    Ticket *T;
    Regular R;
    Premium P;

   
    T=&R;
    T->calculate();
    T=&P;
    T->calculate();
    return 0;

}