#include<bits/stdc++.h>
using  namespace std;
class Date{
public:
    int date;
    int month;
    int year;
  Date(int date,int month,int year){
    this->date=date;
    this->month=month;
    this->year=year;
}
Date operator++(int){
       date++;
       if(date>31){
        date=1;
        month++;
        if(month>12){
            month=1;
            year++;
        }
       }
}
Date operator--(int){
       date--;
       if(date<1){
        date=31;
        month--;
        if(month<1){
            month=12;
            year--;
        }
       }
}
void printdate(){
cout<<date<<"\\"<<month<<"\\"<<year<<endl;}
};
int main(){
Date a=Date(31,11,2002);
Date b=Date(12,11,2022);
a++;
b--;
a.printdate();
b.printdate();
return 0;}
