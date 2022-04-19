#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,B,x,y;
        cin>>n>>B>>x>>y;

        long long int arr[n+1];arr[0] = 0;
        long long int sum = 0;
        for(int i=1;i<=n;i++){
            if(arr[i-1] + x <= B) arr[i] = arr[i-1] + x;
            else arr[i] = arr[i-1] - y;
            sum += arr[i];
        }
        cout<<sum<<endl;
    }
}
