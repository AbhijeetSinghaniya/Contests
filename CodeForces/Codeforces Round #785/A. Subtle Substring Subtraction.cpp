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
            cout<<"Bob "<<s[0] - 'a' + 1<<endl;
            continue;
        }
        int sum = 0;

        if(n%2 == 0){
            for(auto it : s) sum += it - 'a' + 1;
            cout<<"Alice "<<sum<<endl;
            continue;
        }

        int x = s[0] - 'a' +1,y = s[n-1] - 'a'+1;

        for(auto it : s) sum += it - 'a' + 1;
        int al = sum,bob;
        if(x >= y){
            al -= y;
            bob = y;
        }
        else{
            al -= x;
            bob = x;
        }

        if(al > bob){
            cout<<"Alice "<<al-bob<<endl;
        }
        else cout<<"Bob "<<bob-al<<endl;
    }
}
