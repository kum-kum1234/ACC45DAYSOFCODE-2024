#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int t=1;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='I')
	        {
	            cout<<"INDIAN"<<endl;
	            t=0;
	            break;
	        }
	        else if(s[i]=='Y')
	        {
	            cout<<"NOT INDIAN"<<endl;
	            t=0;
	            break;
	        }
	        
	    }
	    if(t==1)
	    cout<<"NOT SURE"<<endl;
	    
	}
	return 0;
}