#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B;
	    cin>>A>>B;
	    if((A+B)<=10){
	       cout<<-1<<endl; 
	    }
	    else{
	        cout<<21-(A+B)<<endl;
	    }
	}
	return 0;

}
