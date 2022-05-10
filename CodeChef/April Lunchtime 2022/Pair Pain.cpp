#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long long int c1 = 0,c2 = 0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x == 1) c1++;
            if(x == 2) c2++;
        }
        long long int ans = (c1*(c1-1))/2 + (n - c1)*c1;
        ans += (c2*(c2-1))/2;
        cout<<ans<<endl;
    }
	return 0;
}
