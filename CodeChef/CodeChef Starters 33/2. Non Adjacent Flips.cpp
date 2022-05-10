#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        
        int c1=0;
        
        for(int i=0;i<n-1;i++){
            if(s[i] == '1' && s[i+1] == '1'){
                cout<<2;
                goto finish;
            }
            if(s[i] == '1') c1 = 1;
        }
        if(s[n-1] == '1') c1 = 1;
        
        cout<<c1;
        finish : 
            cout<<endl;
    }
	return 0;
}
