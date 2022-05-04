#include <bits/stdc++.h>
using namespace std;
class calculator{
    int a,b;
public:
calculator(int j,int k){
a=j;
b=k;
}
void add (){
    cout<<a<<" + "<<b<<" = "<<a+b<<"\n";
}
void subtract (){
     cout<<a<<" - "<<b<<" = "<<a-b<<"\n";
}
void multiply(){
     cout<<a<<" X "<<b<<" = "<<a*b<<"\n";
}
void divide (){
     cout<<a<<" / "<<b<<" = "<<a/b<<"\n";
}

};
int main(){
    calculator n1=calculator(10,20);
    calculator n2=calculator(100,30);
    n1.add();
    n2.add();
    n1.subtract();
    n2.subtract();
    n1.multiply();
    n2.multiply();
    n1.divide();
    n2.divide();


    return 0;
}