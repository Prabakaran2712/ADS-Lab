#include<bits/stdc++.h>
using namespace std;
void area( double r) {
cout<<"Area of  circle";
cout<<"\n"<<3.14*r*r<<endl;}
void area(double l,double b) {
cout<<"Area of  rectangle";
cout<<"\n"<<l*b<<endl;}
void area(int s) {
cout<<"Area of  hexagon";
cout<<"\n"<<2.59807621*s*s<<endl;
}
int main(){
    area(1.5);
    area(10,20.5);
    area(10);
return 0;}
