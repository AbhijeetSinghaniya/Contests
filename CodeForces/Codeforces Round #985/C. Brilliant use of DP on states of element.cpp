#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        
        vector<vector<int>> dp(n+1,vector<int> (3,0));
        
        for(int i=1;i<=n;i++) {
            int prev = dp[i-1][0];
            if(prev < arr[i-1]) prev++;
            else if(prev > arr[i-1]) prev--;
            dp[i][0] = prev;
            
            dp[i][1] = max(dp[i-1][0], dp[i-1][1]);
            
            dp[i][2] = max(dp[i-1][1], dp[i-1][2]);
            
            if(dp[i][2] > arr[i-1]) dp[i][2] -= 1;
            else if(dp[i][2] < arr[i-1]) dp[i][2] += 1;
        }
        
        int ans = max(dp[n][1],dp[n][2]);
        if(ans == n) --ans;
        cout<< ans << endl;
    }
}
