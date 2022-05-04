#include <bits/stdc++.h>
using namespace std;
#define print(x,y) cout<<x<<" : "<<y<<"\n"
class student{
    public: 
        string name;
        long int rollnumber;
        int marks;
        student(string i,long int j,int k ):name(i),rollnumber(j),marks(k){}
    float cgpa(){
        print("Name",name); 
        print("Rollnumber",rollnumber); 
        print("Marks",marks);
        print("Cgpa",marks/10);     
    }
};
int main(){
    student s1=student("Praba",2020506062,100);
    s1.cgpa();
    return 0;
}