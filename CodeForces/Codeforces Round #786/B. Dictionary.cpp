#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        char s1 = s[0];
        char s2 = s[1];

        int ans = 25 * (s[0] - 'a');
        if(s[1] < s[0]) ans += s[1] - 'a' + 1;
        else ans += s[1] - 'a';
        cout<<ans<<endl;
    }
}
