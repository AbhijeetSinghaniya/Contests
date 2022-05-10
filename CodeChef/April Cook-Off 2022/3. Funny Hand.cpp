#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
        if(abs(a-b) > 2 || abs(a-b) == 0){
            cout<<0<<endl;
            continue;
        }
        
        if(abs(a - b) == 2){
            cout<<1<<endl;
            continue;
        }
        
        if(abs(a - b) == 1){
            if(a == 1 || b == 1 || a == n || b == n){
                cout<<1<<endl;
            }
            else cout<<2<<endl;
            continue;
        }
    }
	return 0;
}
