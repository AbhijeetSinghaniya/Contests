#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    if(n == 1){
        cout<<(a[0]+1)/2<<endl;
        return 0;
    }
    vector<int> a2 = a;
    sort(a2.begin(),a2.end());

    int c1 = (a2[0]+1)/2 + (a2[1]+1)/2;  //distance b/w i & j is strictly greater than 1 (profit = 2)

    int c2 = INT_MAX;  //distance b/w i & j is equal to 1 (profit = 2)
    for(int i=0;i<n-2;i++){
        int x = a[i]/2 + a[i+2]/2;
        if(a[i]%2 == 1 || a[i+2]%2 == 1) x++;
        c2 = min(c2,x);
    }

    int c3 = INT_MAX;  //i & j are adjacent
    for(int i=0;i<n-1;i++){
        int p = a[i];
        int q = a[i+1];

        if(q > p) swap(p,q);
        int x;
        if(p >= 2*q) x = (p+1)/2; //always q will become 0 with or before p (profit = 3 until q is non-zero, then profit = 2)
        else x = (p+q+2)/3; //every time hitting the greater element (profit = 3)
        c3 = min(c3,x);
    }
    int ans = min({c1,c2,c3}); //min. of all cases
    cout<<ans<<endl;
}
