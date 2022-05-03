#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        cin>>t;

        int n = s.length();

        int cnta = 0;
        for(auto it : t){
            if(it == 'a') cnta++;
        }

        if(cnta > 1){
            cout<<-1<<endl;
            continue;
        }
        if(cnta == 1){
            if(t.length() == 1){
                cout<<1<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        unsigned long long int x = pow(2,n); //sum of nCo to nCn
        cout<<x<<endl;
    }
}
