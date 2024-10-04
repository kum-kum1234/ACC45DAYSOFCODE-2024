#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,K;
	    cin>>N>>K;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(K>=arr[i])
	        {
	            K=K-arr[i];
	            cout<<"1";
	        }
	        else
	        {
	            cout<<"0";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
