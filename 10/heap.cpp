#include<bits/stdc++.h>
using namespace std;
template <typename t>
void heapify(vector<t> &a,int i){
    int size=a.size();
    int largest=i;
  int  l=2*i+1;
   int  r=2*i+2;
    if(l<size && a[l]>a[largest])
    largest=l;
    if(r<size && a[r]>a[largest])
    largest=r;
    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,largest);
    }
}
template <typename t>
void insert(vector<t> &a,t key){
    int size=a.size();
    if(size==0){
        a.push_back(key);
    }
    else{
        a.push_back(key);
        for(int i=(size+1)/2-1;i>=0;i--){
            heapify(a,i);
        }
    }
}
template <typename t>
void deletenode(vector<t> &a,t key){
    int size=a.size();
    int i;
    int flag=0;
    for(i=0;i<size;i++){
        if(a[i]==key){
            flag=1;
            break;
            
        }
    }
    swap(a[i],a[size-1]);
    if(flag==1){
        cout<<"Deleted successfully\n";
        a.pop_back();
        for (int i = size / 2 - 1; i >= 0; i--)
  {
    heapify(a, i);
  }
    }
    else{
        cout<<"The element is not present \n";
    }
    
}

int main(){
    int choice;
    vector<int> heap;
    while(1){
        cout<<"0 for help\n";
        cin>>choice;
        if(choice==-1){
            break;
        }
        else if(choice==0){
            cout<<"1)Insert\n2)Delete\n3)Print\n-1)Exit\n";
        }
        else if(choice==1){
            int t;
            cout<<"Enter the node to be inserted \n";
            cin>>t;
            insert(heap,t);
        }
        else if(choice==2){
              int t;
            cout<<"Enter the node to be deleted \n";
            cin>>t;
            deletenode(heap,t);
        }
        else if(choice==3){
            for(auto &i : heap){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}
