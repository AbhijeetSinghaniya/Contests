#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        
        int d = y/x;
        
        if(d <= z) cout<<z - d<<endl;
        else cout<<0<<endl;
    }
	return 0;
}
