#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        
        if(n < 3){
            cout<<-1<<endl;
            continue;
        }
        
        int l = 1,r = n-2,i;
        int count = -1;
        
        while(l <= r){
            if(s[l] == s[0] || s[l] == s[n-1]){
                l++;continue;
            }
            if(s[r] == s[0] || s[r] == s[n-1]){
                r--;continue;
            }
            
            for(i=l;i<=r;i++){
                if(s[i] == s[0] || s[i] == s[n-1]){
                    if(i-l >= r-i){
                        count = max(count,i-l);
                        goto finish;
                    }
                    else{
                        count = max(count,i-l);
                        l = i+1;
                    }
                }
                if(i == r){
                    count = max(count,r-l+1);
                }
            }
            if(i > r) break;
        }
finish: 
        cout<<count<<endl;
    }
	return 0;
}
