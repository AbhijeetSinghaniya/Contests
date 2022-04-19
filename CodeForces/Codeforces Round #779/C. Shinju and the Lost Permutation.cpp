#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        int pos = min_element(arr.begin(),arr.end()) - arr.begin();
        if(arr[pos] == 1){
            int maxi = 1;
            for(int i=1;i<n;i++){
                pos = (pos+1)%n;
                if(arr[pos] == 1 || arr[pos] > maxi + 1){
                    cout<<"NO";
                    goto finish;
                }
                maxi = arr[pos];
            }
        }else{
            cout<<"NO";
            goto finish;
        }
        cout<<"YES";
        finish : cout<<endl;
    }
}
