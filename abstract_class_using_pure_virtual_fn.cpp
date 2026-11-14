#include<iostream>
using namespace std;
class Ticket{
    protected:
    int baseFare;
    public:

    Ticket(){
        baseFare=0;
    }
    virtual void calculateFare()=0;
};
class RegaularShow:public Ticket{
    public:
    RegaularShow(int fare){
  baseFare=fare;
    }
    void calculateFare(){
        cout<<"Regular show fare: "<<baseFare<<endl;
    }
};
class PremiumShow:public Ticket{
    public:
    PremiumShow(int fare){
        baseFare=fare;

    }
    void calculateFare(){
        cout<<"Premium show fare: "<<baseFare+100<<endl;
    }
};
class ThreeDShow:public Ticket{
    public:
    ThreeDShow(int fare){
   baseFare=fare;
    }
    void calculateFare(){
        cout<<"3D show fare: "<<baseFare+150<<endl;
    }
};
int main(){
    int fare;
    cout<<"Enter the fare amount: "<<endl;
    cin>>fare;
    RegaularShow R(fare);
    PremiumShow P(fare);
    ThreeDShow T(fare);
    R.calculateFare();
    P.calculateFare();
    T.calculateFare();
    return 0;
}