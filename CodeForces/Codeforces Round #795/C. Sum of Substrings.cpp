#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int f = -1,l = -1,cnt = 0;
      
        for(int i=0;i<n;i++){
            if(s[i] == '1') cnt++;
        }

        if(cnt == 0){
            cout<<0<<endl;
            continue;
        }

        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                f = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i] == '1'){
                l = i;
                break;
            }
        }
        long long int sum = 11*cnt;
        int dl = n - 1 - l;

        if(cnt == 1){
            if(dl <= k) sum -= 10;
            else if(f <= k) sum -= 1;
        }
        else{
            if(dl <= k){
                sum -= 10;
                k -= dl;
            }
            if(f <= k){
                sum -= 1;
            }
        }
        cout<<sum<<endl;
    }
}
