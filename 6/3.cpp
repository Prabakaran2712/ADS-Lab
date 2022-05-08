#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    string rno;
    int marks;
    Student(){
        getinput();
    }
    void getinput(){
        try{

        cout<<"Enter your Name"<<endl;
        cin>>name;
        cout<<"Enter your rollnumber"<<endl;
        cin>>rno;
        cout<<"Enter Marks"<<endl;
        cin>>marks;
        if(rno.length()!=10){
            throw 1;
        }
        else if(marks<0||marks>100){
            throw 'x';
        }
    }catch(int x){
        cout<<"Enter a Valid rollnumber"<<endl;
        getinput();
    }
    catch(char y){
        cout<<"Enter vaid marks"<<endl;
        getinput();
    }
        
    }
void display(){
    cout<<"Name "<<endl;
    cout<<name<<endl;
    cout<<"Roll Number"<<endl;
    cout<<rno<<endl;
    cout<<"Marks"<<endl;
    cout<<marks<<endl;
}
    
    
};
int main(){
    vector<Student>s;
    int choice;
    while(true){
        cout<<"Enter your choice";
        cin>>choice;
        if(choice==-1){
            break;
        }
        else{
            if(choice==1){
            Student x;
                  
                  s.push_back(x);}
                else if(choice==2){
                   for(int i=0;i<s.size();i++){
                       s[i].display();
                   }}
                   else{
                       cout<<"Enter  a vaid choice "<<endl;
                   }
            }
        }
    
    return 0;
}
