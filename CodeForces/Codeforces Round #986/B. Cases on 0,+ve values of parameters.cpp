#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        unsigned long long int n,b,c;
        cin>>n>>b>>c;
        
        if(b == 0 && c == 0) {
            if(n == 1) cout<<0<<endl;
            else if(n == 2) cout<<1<<endl;
            else cout<<-1<<endl;
            continue;
        }
        
        if (b == 0 && c >= n) {
            cout << n << endl;
            continue;
        }
        
        if(b == 0) {
            if(c < n-2) {
                cout<<-1<<endl;
                continue;
            }
            else cout<<n-1<<endl;
        }
        
        // if(b == 0 && n <= 2) {
        //     if(n == 2 && c > ) 
        // }
        
        if(b > 0) {
            if(c >= n) {
                cout<<n<<endl;
                continue;
            }
            unsigned long long int maxi = (n-1-c)/b;
            unsigned long long int ans = n - (maxi + 1); //+1 for i=0
            unsigned long long int maxv = (maxi*b) + c;
            // if(maxv != n-1) ans;
            cout<<ans<<endl;
        }
    }
}
