#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
       // for(int &x:a) cin>>x;
	   // for(int &x:b) cin>>x;
	   
	   //Can directly use two for loops and match every element but will give TLE
        long long int cnt = 0;
        map<pair<int,int>,int> mp;
        for(int i=0;i<n;i++){
            cnt += mp[{a[i],b[i]}];
            mp[{b[i],a[i]}]++;
        }
        cout<<cnt<<endl;
        
    }
	return 0;
}
