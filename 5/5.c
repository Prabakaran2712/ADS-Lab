#include<bits/stdc++.h>
using namespace std;
template<class T>
class calculator{
    public:
     T a ,b;
     char c;
     void getdata(){
         cout<<"Enter the number 1"<<endl;
         cin>>a;
         cout<<"Enter the number 2"<<endl;
         cin>>b;
         cout<<"Enter the operation to be performed"<<endl;
         cin>>c;
     }
     void add(){
         cout<<"The sum "<<a+b<<endl;
     }
     void subtract(){
         cout<<"The difference "<<a-b<<endl;
     }
     void multiply(){
         cout<<"The product "<<a*b<<endl;
     }void divide(){
         cout<<"The quotient "<<a/b<<endl;
     }
};

int main(){
    calculator<int> c;
    while(1){
           c.getdata();
           if(c.c=='x'){c.multiply();}
           else if(c.c=='+'){
               c.add();
           }
           else if(c.c=='-'){c.subtract();}
           else if(c.c=='/'){c.divide();}
           else if(c.c=='q'){break;}
           else{
               cout<<"Enter a valid operator"<<endl;
           }
    }
    return 0;
}