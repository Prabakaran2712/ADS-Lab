#include<bits/stdc++.h>
using namespace std;
class vehicle{
    public:
    virtual void message()=0;
   virtual void fare(int )=0;
};
class Car:public vehicle{
    public:
    void message(){
        cout<<"Car"<<endl;
    }
    void fare(int d){
        cout<<"Total fare \n";
        cout<<d*10<<endl;
    }
};
class Bus:public vehicle{
    public:
    void message(){
        cout<<"Bus"<<endl;
    }
    void fare(int d){
        cout<<"Total fare \n";
        cout<<d*5<<endl;
    }
};
class Boat:public vehicle{
    public:
    void message(){
        cout<<"Boat"<<endl;
    }
    void fare(int d){
        cout<<"Total fare \n";
        cout<<d*100<<endl;
    }
};
int main(){
    vehicle* v;
    Car c;
    v=&c;
    v->message();
    v->fare(10);
    return 0;
}