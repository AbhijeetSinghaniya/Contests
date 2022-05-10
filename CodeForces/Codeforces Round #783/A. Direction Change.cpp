#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        n--;m--;

        if(n == 0 && m == 0){
            cout<<0<<endl;continue;
        }
        if((n == 0 && m > 1) || (m == 0 && n > 1)){
            cout<<-1<<endl;
            continue;
        }

        if(n > m) swap(n,m);
        long long int i=0,j=0,ans = 0;
        i += n;j += n;ans += 2*n;

        if(i == n && j == m){
            cout<<ans<<endl;
            continue;
        }
        long long int x = m - j;
        ans += (x/2)*4;
        if(x%2 == 1){
            ans += 1;
        }
        cout<<ans<<endl;
    }
}
