#include<bits/stdc++.h>
using namespace std;
class Employee{
public :
    string name;
    double salary;
    Employee(){
      name="Praba";
    salary=200000;}
    Employee(string name,double salary){
    this->name=name;
    this->salary=salary;
    }
    void printtax(){
    if(salary<10000){
        cout<<"Name  "<<name<<endl;
        cout<<"Salary "<<salary<<endl;
        cout<<"Tax "<<(0.015)*salary<<endl;
    }
    else if  (salary<30000){
        cout<<"Name  "<<name<<endl;
        cout<<"Salary "<<salary<<endl;
        cout<<"Tax "<<(0.035)*salary<<endl;
    }
      else{
        cout<<"Name  "<<name<<endl;
        cout<<"Salary "<<salary<<endl;
        cout<<"Tax "<<(0.07)*salary<<endl;
    }
    }
};
int main(){
int n;
string name;
double salary;
vector <Employee> a;
cout<<"Enter the number of employees : ";
cin>>n;
for (int i=0;i<n;i++){
    cout<<"Enter the employee name : ";
    cin>>name;
     cout<<"Enter the employee salary : ";
    cin>>salary;
    a.push_back(Employee(name,salary));

}cout<<"Tax of employees"<<endl;
for (int i=0;i<a.size();i++){

    a[i].printtax();
}

return 0;}
