#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        
        map<long long,long long> freq;
        long long ans = 0;
        
        for(int i=0;i<n;i++){
            ans += freq[v[i]];
            if(k >= v[i]){
                freq[(k - v[i])^v[i]]++; // (a | b) + (a & b) = a + b
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
