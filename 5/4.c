#include<bits/stdc++.h>
using namespace std;
template <typename T>
T returnmax(T a,T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
template <typename T>
T returnmin(T a,T b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
template <typename Item>
void selectionSort(Item a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    Item min = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[min])
        min = j;
     swap(a[i],a[min]);
    }
  }
}
int main(){
    int a=10,b=5;
    cout<<returnmin(a,b)<<endl;
    cout<<returnmax(a,b)<<endl;
    int x[20];
    x[0]=5;
    x[1]=4;
    x[2]=3;
    x[3]=2;
    selectionSort(x,4);
    for(int i=0;i<4;i++){
        cout<<x[i]<<endl;
    }
}