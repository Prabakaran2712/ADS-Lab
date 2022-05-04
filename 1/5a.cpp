#include <bits/stdc++.h>
using namespace std;\
class Test{
    public:
    int a;
    Test(){
        cout<<"Constructor \n";
    }
    Test(int i) :a(i){
        cout<<a<<endl;
    }
    ~Test(){
        cout<<"Destructor \n";
    }
    


};
int main(){
    Test o1=Test();
    Test o2=Test(5);
return 0;
}
