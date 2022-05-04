#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int l=0,b=0;
    public:
    rectangle(int i,int j):l(i),b(j){}
    void area(){
        cout<<"Area of the rectangle of length "<<l<<" and breadth "<<b<<" is "<<l*b;

    }

};
int main(){
  rectangle r1=rectangle(10,20);
  r1.area();
}