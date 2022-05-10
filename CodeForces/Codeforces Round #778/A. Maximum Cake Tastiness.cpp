#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;

        long long int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        if(n<=2){
            cout<<arr[0] + arr[1]<<endl;
            continue;
        }

        long long int max1 = INT_MIN,idx = -1;
        long long int ans = 0;

        for(int i=0;i<n;i++){
            if(arr[i] > max1){
                max1 = arr[i];
                idx = i;
            }
        }
        ans += max1;
        arr[idx] = 0;

        max1 = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i] > max1){
                max1 = arr[i];
                idx = i;
            }
        }
        ans += max1;
        cout<<ans<<endl;
    }
}
