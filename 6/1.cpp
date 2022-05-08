#include<bits/stdc++.h>
using namespace std;
class Bank{
    public:
      float balance;
      virtual void getbalance()=0;
      virtual void withdraw()=0;
      virtual void updatebalance()=0;
};
class Iob:public Bank{
    public:
    Iob(float x){
     balance=x;
    }
    void getbalance(){
        cout<<"IOB"<<endl;
        cout<<"Your Balance is "<<balance<<endl;
    }
    void withdraw(){
        float amount;
        cout <<"IOB"<<endl;
        cout<<"Enter the amount to be withdrawn"<<endl;
        cin>>amount;
        if(amount<=balance){
            balance-=amount;
            cout<<"Amount successfully withdrawn"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void updatebalance(){
        balance+=balance*0.05;
        cout<<"Balance Updated"<<endl;
        
    };
};
class Sbi:public Bank{
    public:
    Sbi(float x){
     balance=x;
    }
    void getbalance(){
        cout<<"SBI"<<endl;
        cout<<"Your Balance is "<<balance<<endl;
    }
    void withdraw(){
        float amount;
        cout <<"SBI"<<endl;
        cout<<"Enter the amount to be withdrawn"<<endl;
        cin>>amount;
        if(amount<=balance){
            balance-=amount;
            cout<<"Amount successfully withdrawn"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void updatebalance(){
        balance+=balance*0.1;
        cout<<"Balance Updated"<<endl;
        
    };
};
class Pnb:public Bank{
    public:
    Pnb(float x){
        balance=x;
    }
    void getbalance(){
        cout<<"Pnb"<<endl;
        cout<<"Your Balance is "<<balance<<endl;
    }
    void withdraw(){
        float amount;
        cout <<"IOB"<<endl;
        cout<<"Enter the amount to be withdrawn"<<endl;
        cin>>amount;
        if(amount<=balance){
            balance-=amount;
            cout<<"Amount successfully withdrawn"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void updatebalance(){
        balance+=balance*0.07;
        cout<<"Balance Updated"<<endl;
        
    };
};
int main(){
    Iob a=Iob(10000);
    Sbi b=Sbi(15000);
    Pnb c=Pnb(20000);
    a.getbalance();
    b.getbalance();
    c.getbalance();
    a.updatebalance();
    a.getbalance();
    return 0;
}
