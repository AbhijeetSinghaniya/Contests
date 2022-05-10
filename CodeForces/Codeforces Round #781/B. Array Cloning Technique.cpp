#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        map<int,int> mp;

        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }

        int maxf = -1;
        for(auto it : mp) maxf = max(maxf,it.second);

        int ans = 0;
        int count = maxf;

        while (count < n) {
            ++ans;
            ans += min(n-count, count);
            count += min(n-count, count);
        }

        // while(count < n){
        //     if(count + maxf < n){
        //         count += maxf;
        //         ans += 1 + maxf;
        //     }
        //     else{
        //         ans += 1 + (n - count);
        //         break;
        //     }
        //     maxf *= 2;
        // }
        cout<<ans<<endl;
    }
}
