#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int k=0;
        for(int i=2;i<N;i++){
         if(N%i==0){
             k=1;
         }
    }
    if(k==1 || N==1){
        cout<<"no"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
    return 0;
}
