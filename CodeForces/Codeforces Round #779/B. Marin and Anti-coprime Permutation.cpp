#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%2 == 1){
            cout<<0<<endl;
            continue;
        }
        long long int ans = 1;
        const int mod = 998244353;

        for(int i=1;i<=n/2;i++){
            ans = ((ans%mod)*(i*i)%mod)%mod;
        }
        cout<<ans<<endl;
    }
}
