#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n = s.length();

        map<char,int> mp;
        for(auto it : s){
            mp[it]++;
        }
        if(mp.size() == 1){
            cout<<"YES"<<endl;
            continue;
        }

        int flag = 0;
        map<char,int> mp1;
        for(int i=0;i<n;i++){
            if(mp1.find(s[i]) != mp1.end()){
                int x = mp1[s[i]];
                int y = i;
                if(y - x - 1 < mp.size()-1){
                    flag = 1;
                    break;
                }
                map<char,int> mp2;
                for(int j=x;j<=y;j++){
                    mp2[s[j]]++;
                }
                if(mp2.size() != mp.size()){
                    flag = 1;
                    break;
                }
            }
            mp1[s[i]] = i;
        }
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
