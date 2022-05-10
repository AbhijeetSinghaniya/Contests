#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int a[n],b[n];

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        /*for(int i=1;i<n;i++){
            if(abs(a[i-1] - a[i]) + abs(b[i-1] - b[i]) + >
               abs(a[i-1] - b[i]) + abs(b[i-1] - a[i]))
               swap(a[i],b[i]);

        }*/

        long long int sum = 0;
        for(int i=1;i<n;i++){
            sum += min(abs(a[i-1] - a[i]) + abs(b[i-1] - b[i]), abs(b[i-1] - a[i]) + abs(a[i-1] - b[i]));
        }
        cout<<sum<<endl;
    }
}
