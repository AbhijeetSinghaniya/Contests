#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;

        vector<int> arr(n);
        int maxi = 0,mini = INT_MAX;
        for(int i=0;i<n;i++){
                    cin>>arr[i];
                    maxi = max(maxi,arr[i]);
                    mini = min(mini,arr[i]);
        }

        long long int sum = maxi;
        for(int i=0;i<n;i++){
            sum += arr[i];

        }
        sum += n - mini;

        if(sum > m){
            cout<<"NO";
        }
        else cout<<"YES";
        finish : cout<<endl;
    }
}
