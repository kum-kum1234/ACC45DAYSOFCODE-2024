#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,x;
	    cin>>N>>x;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    int max=x;
	    for(int i=0;i<N;i++){
	        x=x+A[i];
	        if(x>max){
	            max=x;
	        }
	    }
	        cout<<max<<endl;
	        }
	   return 0;
}
