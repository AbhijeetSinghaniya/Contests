#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,m;
	    cin>>a>>b>>m;
	    long long int x = abs(a-b);
	    long long int y = min(x,m-x);
	    cout<<y<<endl;
	}
	return 0;
}
