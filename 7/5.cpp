#include <bits/stdc++.h>

using namespace std;

void printUmm(unordered_multimap<string, int> &umm){
    for(auto i=umm.begin();i!=umm.end();i++)
        cout<<i->first<<": "<<i->second<<"\n";
}
void printmm(multimap<string, int> &mm){
    for(auto i=mm.begin();i!=mm.end();i++)
        cout<<i->first<<": "<<i->second<<"\n";
}

int main(){
    unordered_multimap<string, int> umm;
    umm.insert({"apple", 1});
    umm.insert({"orange", 2});
    umm.insert({"orange", 5});
    umm.insert({"banana", 6});
    printf("unordered multimap content:\n");
    printUmm(umm);
    cout<<"Size of unordered multimap is "<<umm.size();
    cout<<"\nValues associated with orange in unordered multimap is "<<umm.count("orange");
    umm.erase("orange");
    cout<<"\nSize after deleting orange: "<<umm.size();
    multimap<string, int> mm;
    mm.insert({"apple", 1});
    mm.insert({"orange", 2});
    mm.insert({"orange", 5});
    mm.insert({"banana", 6});
    printf("ordered multimap content:\n");
    printmm(mm);
    cout<<"Size of ordered multimap is "<<mm.size();
    cout<<"\nValues associated with orange in ordered multimap is "<<mm.count("orange");
    mm.erase("orange");
    cout<<"\nSize after deleting orange: "<<mm.size();
    

}
