#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int B1;
	    int B2;
	    int B3;
	    cin>>B1>>B2>>B3;
	    if((B1==1 || B1==0) && (B2==1  || B2==0) && (B3==1 || B3==0)){
	        if(B1==1 && B2==1 && B3==1){
	        cout<<"Not now"<<endl;
	    }
	    else if((B1==1 && B2==1)||(B2==1 && B3==1 )||(B1==1 && B3==1)){
	       cout<<"Not now"<<endl;
	    }
	    else if((B1==0 && B2==0)||(B2==0 && B3==0 )||(B1==0 && B3==0)){
	        cout<<"Water filling time"<<endl;
	    }
	     else{
	        cout<<"waatr filling time"<<endl;
	    }
	}
	    else{
	        cout<<"invalid input B1 ,B2,B3 must be 0 or 1"<<endl;
	    }
	}
	    return 0;
}
	   