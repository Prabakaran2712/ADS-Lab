#include<bits/stdc++.h>
using namespace std;
class vehicle{
    public:
    string name;
    int distance;
    int timeboard;
    int amount;
    void getdata(){
        cout<<"Enter your name\n";
        cin>>name;
        cout<<"Enter the distance \n";
        cin>>distance;
        cout<<"Enter the time for boarding \n";
        cin>>timeboard;
        
    }
    friend void compare(vehicle v1,vehicle v2);
};
 void compare(vehicle v1,vehicle v2){
    if(v1.amount>v2.amount){
        cout<<"Choose uber";
    }
    else if(v1.amount==v2.amount){
        cout<<"both are fine";
    }
    else{
        cout<<"choose Ola";
    }
}
class Ola :public vehicle{
    public:
    Ola(){
        getdata();
        calcbill();
    }
    void calcbill(){
    cout<<"Ola";
    amount=distance*5;
    if(timeboard>9 &&timeboard<10){
        amount=amount*2;
    }
    cout<<"Amount is "<<amount<<endl;
    }
};
class Uber :public vehicle{
    public:
    Uber(){
        getdata();
        calcbill();
    }
    void calcbill(){
    cout<<"Uber";
    amount=distance*4;
    if(timeboard>9 &&timeboard<10){
        amount=amount*3;
    }
    cout<<"Amount is "<<amount<<endl;
    }
};
int main(){
    Ola a;
    Uber b;
    compare(a,b);
}

