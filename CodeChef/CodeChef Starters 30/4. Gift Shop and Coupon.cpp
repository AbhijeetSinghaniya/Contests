#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        
        long long int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        
        sort(arr,arr+n);
        
        long long int ans = 0;
        for(int i=0;i<n;i++){
            if(k - arr[i] >= 0){
                ans++;
                k -= arr[i];
            }
            
            else{
                if(arr[i]%2 == 1) arr[i]++;
                arr[i] /= 2;
                if(k >= arr[i]){
                    ans++;
                }
                break;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
