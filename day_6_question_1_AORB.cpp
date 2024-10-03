#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A;
	    int B;
	    cin>>A>>B;
	    int a=(500-(A*2))+(1000-((A+B)*4));
	    int b=(1000-(B*4))+(500-((A+B)*2));
	    if(a>b){
	        cout<<a<<endl;
	    }
	    else if(a==b){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	}
	return 0;
}
	    
	    