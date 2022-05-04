#include<bits/stdc++.h> 
using namespace std; 
class Objectcount{ public: static int count; Objectcount(){ count++; } }; int Objectcount::count=0; int main(){ Objectcount a; Objectcount b; Objectcount c; cout<<"Count of Objects "<<Objectcount::count; }

