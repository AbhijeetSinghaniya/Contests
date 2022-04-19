#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;cin>>s;

        int l0 = -1,n0 = -1,ans=0; //last0 and next0 positions

        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                if(l0 == -1){
                    l0 = i;
                    continue;
                }
                n0 = i;
                if(n0 - l0 == 1) ans += 2;
                else if(n0 - l0 == 2) ans++;
                l0 = n0;
            }
        }
        cout<<ans<<endl;
    }
}
