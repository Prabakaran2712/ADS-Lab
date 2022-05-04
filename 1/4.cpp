#include<bits/stdc++.h>
using namespace std;
class student{
public:
int rollnumber;
string name;
student(int i,string j):rollnumber(i),name(j){}
};
int main(){
    vector <student> arr;
    int choice;
    
    // for(auto x:arr){
    //     cout<<x.name;
    // }
    while(1){
        cout<<"Enter your choice : \n 1) add \n2)Sort acccording to name \n 3)sort according to rollnumber ";
        cin>>choice;
        int rno;
        string name;

        if(choice==-1){
            break;
        }
        switch (choice)
        {
        case  1 :
            cout<<"Enter the roll number";
            cin>>rno;
            cout<<"Enter the Name ";
            cin>>name;
            arr.push_back(student(rno,name));
            break;
        case 2 :
          sort(arr.begin(),arr.end(),[](student a,student b){
return a.rollnumber>b.rollnumber;
          });
              for(auto x:arr){
        cout<<"Name : "<<x.name<<"\n";
        cout<<"RollNumber : "<<x.rollnumber<<"\n";

    }
    break;
       case 3 :
          sort(arr.begin(),arr.end(),[](student a,student b){
return a.name>b.name;
          });
              for(auto x:arr){
        cout<<"Name : "<<x.name<<"\n";
        cout<<"RollNumber : "<<x.rollnumber<<"\n";
    }
    
    break;
        }

}
return 0;
}