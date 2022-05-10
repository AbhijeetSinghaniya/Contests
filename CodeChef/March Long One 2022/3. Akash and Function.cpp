#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        // for(int i=1;i<=n;i++){
        //     int j = i;
        //     while(j <= n){
        //         if(arr[j] == false) break;
        //         if( j == i) count++;
        //         arr[j] = false;
        //         j *= 2;
        //     }
        // }
         int count = 0;
         if(n%2 == 0) count = n/2;
         else count = n/2 + 1;
         
        cout<<count<<endl;
    }
	return 0;
}
