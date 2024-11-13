#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr, arr+n);
        
        int r = 0, ans = 0;
        for(int l=0;l<n-1;l++) {
            while(r < n && arr[l] + arr[l+1] > arr[r]) r++;
            ans = max(ans, r-l);
        }
        cout<<n-ans<<endl;
    }
}
