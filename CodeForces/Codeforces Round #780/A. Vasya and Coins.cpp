#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        
        if(a == 0){
            cout<<1<<endl;
            continue;
        }
        long long int c = a + b*2 + 1;
        cout<<c<<endl;
    }
}
