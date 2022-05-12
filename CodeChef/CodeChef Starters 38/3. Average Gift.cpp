#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        sort(a.begin(),a.end());
        
        if(a[0] <= x && a[n-1] >= x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
