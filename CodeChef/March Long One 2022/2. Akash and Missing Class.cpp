#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int ans = 0;
        if(n%7 == 6) ans = (n/7) + 1;
        else ans = n/7;
        cout<<ans<<endl;
    }
	return 0;
}
