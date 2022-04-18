#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;cin>>s;

        string ans = "";
        vector<int> v(n,0);
        int cnt = 0,i;
        for(i=0;i<n && cnt < k;i++){
            if(i == n-1){
                v[i] = k - cnt;
                ans += ((k-v[i])%2 == 0) ? s[i] : (s[i] == '1') ? '0' : '1';
                cnt = k;i++;
                break;
            }
            if(s[i] == '1'){
                if(k%2 == 1){
                    v[i] += 1;
                    cnt++;
                }
            }
            else{
                if(k%2 == 0){
                    v[i] += 1;
                    cnt++;
                }
            }
            ans += '1';
            if(cnt == k){
                if(k%2 == 1){
                    for(i += 1;i<n;i++)
                        ans += (s[i] == '0') ? '1' : '0';
                }
                else for(i += 1;i<n;i++) ans += s[i];
                goto finish;
            }
        }

        if(cnt == k){
            for(;i<n;i++) ans += s[i];
        }
    finish:
        cout<<ans<<endl;
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}
