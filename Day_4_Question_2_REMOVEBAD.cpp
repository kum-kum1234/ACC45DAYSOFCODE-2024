#include <iostream>
using namespace std;
const int MAX_N = 100000;
int main() {
    int T;
    cin>>T;
    while(T--){
	int N;
	cin>>N;
	int a[MAX_N];
	int freq[MAX_N+1] = {0};
	for (int i=0;i<N;i++){
	    cin>>a[i];
	    freq[a[i]]++;
	}
	int max_freq=0;
	for(int i=0;i<=N;i++){
	    if(freq[i]>max_freq){
		max_freq=freq[i];
	}
	}
	cout<<N-max_freq<<endl;
    }
	return 0;
}
