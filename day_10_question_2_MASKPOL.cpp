#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,A;
	    cin>>N>>A;
	   if(N-A<A){
	       cout<<N-A<<endl;
	   }
	   else{
	       cout<<A<<endl;
	   }
	}
	return 0;
}