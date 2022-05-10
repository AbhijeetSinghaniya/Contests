#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int n = s.length();
        if(n == 1){
            cout<<s<<endl;
            continue;
        }
        
        int l = 0,r = n-1;
        
        int i;
        while(l < r){
            
            for(i=l+1;i<n;i++){
                if(s[i] == s[l]){
                    l++;break;
                }
            }
            if(i == n) break;
        }
        
        for(int j = l;j<n;j++) cout<<s[j];
        cout<<endl;
    }
}
