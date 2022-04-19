#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;cin>>s;

        int i=0,ans = 0;
        while(i+2 <= n){
            if(s[i] == '('){  // '()' or '(('
                ans++;
                i += 2;
            }
            else{
                int j = i;i++;
                while(i < n && s[i] == '(') i++; //checking for palindrome
                if(i == n){
                    i = j;
                    break;
                }
                ans++;
                i++;
            }
        }
        cout<<ans<<" "<<n-i<<endl;
    }
}
