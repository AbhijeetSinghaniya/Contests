#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        if(n%2 == 1 && n < 26){
            cout<<-1<<endl;
            continue;
        }

        if(n%2 == 0) {
            int cnt = 0;
            for(int i=0;i<n;i++) {
                if(i%2 == 0) cnt++;
                cout<<cnt<<" ";
            }
            cout<<endl;
            continue;
        }

        int cnt = 3, f = 0;

        for(int i=0;i<n;i++) {
            if(i == 0 || i == 9 || i == 25) {
                cout<<1<<" ";
                continue;
            }
            if(i == 22 || i == 26) {
                cout<<2<<" ";
                continue;
            }
            if(f == 2) {
                cnt++;
                f = 0;
            }
            cout<<cnt<<" ";
            f++;
        }
        cout<<endl;
    }
}
