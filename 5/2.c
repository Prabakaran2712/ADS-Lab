#include<bits/stdc++.h>
using namespace std;
class Bank{
    public:
    virtual void calcint()=0;
   
};
class Iob:public Bank{
    public:
    int amount;
  void calcint(){
      cout<<"\t\t IOB \t\t\n";
      cout<<"Enter the amount\n";
      cin>>amount;
      cout<<"The intrest is : ";
      cout<<amount*0.05<<endl;
  }
    
};
class Sbi:public Bank{
    public:
    int amount;
  void calcint(){
      cout<<"\t\t SBI \t\t\n";
      cout<<"Enter the amount\n";
      cin>>amount;
      cout<<"The intrest is : ";
      cout<<amount*0.09<<endl;
  }
    
};
int main(){
    Bank* b;
    Sbi s;
    b=&s;
    b->calcint();
    Iob x;
    b=&x;
    b->calcint();
    return 0;
}