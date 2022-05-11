#include<bits/stdc++.h>
using namespace std;
int main(){
int c;
vector<int> st;
	while(true){
		
		printf("1 -> push\n2 -> pop\n3 -> top\n-1 -> exit\n");
		cin>>c;
		if(c==1){
			int n;
			printf("Enter num: "); cin >>n;
			st.push_back(n);
		} else if(c==2||c==3){
			if(st.size()==0) printf("Stack is empty\n");
			else {
				cout<<st.back()<<endl;
				if(c==2) st.pop_back();			
			}
		} else if(c==-1) break;
	}
	return 0;
}
