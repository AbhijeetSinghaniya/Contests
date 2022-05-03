#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        if(x > y || y%x != 0){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(x == y){
            cout<<1<<" "<<1<<endl;
            continue;
        }

        int b = y/x;
        int a = 1;
        cout<<a<<" "<<b<<endl;
    }
}
