#include <iostream>
using namespace std;

int main() {
    int t,n,k,m;
    cin >> t;
    while(t--)
    {
      cin >> n >> k >> m;
      int a=(k*m);
      if(n%a==0)
      cout << (n/a) << endl;
      else
      cout << (n/a)+1 << endl;
    }
	return 0;
}