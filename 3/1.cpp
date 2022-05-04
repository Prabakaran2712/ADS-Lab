#include<bits/stdc++.h>
using namespace std;
void print(char a){
    cout<<"character ";
cout<<a<<"\n";}
void print(int a){
    cout<<"Interger ";
cout<<a<<"\n";}
void print(float a){
    cout<<"float ";
cout<<a<<"\n";}
void print(string a){
    cout<<"String ";
cout<<a<<"\n";}
void print(double a){
    cout<<"Double ";
cout<<a<<"\n";}
void calc(int a){
cout<<a<<endl;}
void calc(int a=10,int b=20){
cout<<a+b<<endl;}
/*void incre(int &x){
x++;
}*/
void incre(int x){
x++;
}
int main(){
int a;
float b;
char c;
int e;
string d;
cout<<"Enter  integer";
cin>>a;
print(a);

cout<<"Enter  Float";
cin>>b;
print(b);

cout<<"Enter  character";
cin>>c;
print(c);
cout<<"Enter  String";
cin>>d;
print(d);
print(10.2);
calc(10,20);
e=5;
incre(e);
return 0;
}
