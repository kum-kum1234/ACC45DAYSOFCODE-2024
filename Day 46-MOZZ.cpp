#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,r;
	    cin>>x>>y>>r;
	    int extra=r/30;
	    int total=x+extra;
	    if(total%y==0)
	    cout<<total/y<<endl;
	    else
	    cout<<total/y +1<<endl;
	    
	}
	return 0;
}