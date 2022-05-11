#include<bits/stdc++.h>
using namespace std;

void print(queue<string>q){
int s=q.size();
cout<<"Elements of Queue"<<endl;
for(int i=0;i<s;i++){
string x=q.front();
q.pop();
cout<<x<<" ";
}
cout<<endl;
}
int main(){
queue<string> q({"milk","sugar","cofee","water"});
int s=q.size();
for(int i=0;i<s;i++){
if(q.front()=="cofee"){
q.pop();
q.push("tea");
}
else{
q.push(q.front());
q.pop();
}}
print(q);
return 0;}
