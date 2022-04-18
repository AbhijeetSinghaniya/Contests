#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        ll arr[n+1], pre[n+1];
        arr[0] = 0; pre[0] = 0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pre[i] = pre[i-1]+arr[i];
        }

        ll res = LLONG_MAX,cost;
        for(int i=0;i<n;i++){
            ll cost = (arr[i])*(a+b);
            cost += (pre[n] - pre[i] - (n - i)*arr[i])*b;
            res = min(res,cost);
        }
        cout<<res<<endl;
    }
}
