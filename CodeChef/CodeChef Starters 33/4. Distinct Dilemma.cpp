#include <bits/stdc++.h>
using namespace std;

void bs(long long int low,long long int high,long long int sum,long long int& ans){
    //cout<<low<<" "<<high<<endl;
    while(low <= high){
        //int mid = (low + high) >> 1;
        long long int mid = (low + high)/2;
        //cout<<mid<<endl;
        if(mid*(mid+1) <= sum){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int sum = 0;
        
        for(int i=0;i<n;i++){
            long long int x;cin>>x;
            sum += x;
        }
        sum *= 2;
        
        long long int ans = 1;
        bs(1,sum,sum,ans);
        
    cout<<ans<<endl;
    }
	return 0;
}
