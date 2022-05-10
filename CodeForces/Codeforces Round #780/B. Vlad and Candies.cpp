#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++) cin>>arr[i];

        if(n == 1){
            if(arr[0] != 1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            continue;
        }

        sort(arr,arr+n);

        // int flag = 0;
        // for(int i=n-1;i>0;i--){
        //     if(arr[i] - arr[i-1] >= 2){
        //         cout<<"NO"<<endl;
        //         flag = 1;
        //         break;
        //     }
        // }
        // if(flag == 0) cout<<"YES"<<endl;

        if(arr[n-1] - arr[n-2] >= 2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
