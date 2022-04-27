#include<bits/stdc++.h>
using namespace std;
template <typename T>
void swapnum( T &x,T &y){
    T t;
    t=x;
    x=y;
    y=t;
}
int main(){
    int a,b;
    cout<<"Enter number 1";
    cin>>a;
    cout<<endl;
    cout<<"Enter number 2";
    cin>>b;
    cout<<endl;
    cout<<"value before swap";
    cout<<a<<" "<<b;
    cout<<endl;
    cout<<"value after swap";
    swapnum(a,b);
    cout<<a<<" "<<b;
    cout<<endl;
    float x=4.3,y=3.4;
    cout<<"value before swap";
    cout<<x<<" "<<y;
    cout<<endl;
    cout<<"value after swap";
    swapnum(x,y);
    cout<<x<<" "<<y;
    cout<<endl;
}