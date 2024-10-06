#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((y%x==0)){
	        int m=(y/x)-1;
	        cout<<m<<endl;
	    }
	    else {
	        int m=(y/x);
	        cout<<m<<endl;
	    }
	}
	return 0;

}
