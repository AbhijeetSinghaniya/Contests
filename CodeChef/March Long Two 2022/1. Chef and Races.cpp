#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int c1,c2,r1,r2;
        cin>>c1>>c2>>r1>>r2;
        
        int ans = 2;
        if(c1 == r1 || c1 == r2) ans--;
        if(c2 == r2 || c2 == r1) ans--;
        
        cout<<ans<<endl;
    }
	return 0;
}
