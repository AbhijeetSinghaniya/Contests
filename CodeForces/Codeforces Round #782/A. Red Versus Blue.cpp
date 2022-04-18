#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;

        string s = "";
        s.insert(0,n,'R');

        int i = -1;
        int d = n/(b+1),cnt = 0,x = d;
        int rem = n%(b+1);

        while(cnt < b && x < n) {
            s[x] = 'B';
            if(rem){
                x += d+1;
                rem--;
            }
            else x += d;
            cnt++;
        }
        cout<<s<<endl;
    }
}
