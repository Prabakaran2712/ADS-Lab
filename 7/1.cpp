#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr={4,2,3,5,7,1};
cout<<"Elements of a vector"<<endl;
for(auto i:arr){
cout<<i<<" ";
}
cout<<endl;
sort(arr.begin(),arr.end());
cout<<"Ascending Order"<<endl;
for(auto i:arr){
cout<<i<<" ";
}
cout<<endl;
cout<<"Descending Order"<<endl;
sort(arr.begin(),arr.end(),[](int a,int b){
return (a>b)?1:0;});
for(auto i:arr){
cout<<i<<" ";
}
cout<<endl;
return 0;}
