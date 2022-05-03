#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        int l = -1,r = -1, flag = 0;

        int cnt = 0;
        int ps;
        while(a.size() > 0){
            int n = a.size();

            int mid = n-1; //read the question wrong at first, it is 'last' instead of 'mid'

            a.erase(a.begin() + mid);

            if(l == -1){
                l = a[mid];cnt++;
                continue;
            }
            if(r == -1){
                r = a[mid];cnt++;
                continue;
            }
            if(cnt%2 == 0){
                if(a[mid] <= l && a[mid] <= r){
                    cnt++;
                    ps = a[mid];
                    continue;
                }
                else{
                    flag = 1;break;
                }
            }
            else{
                if(a[mid] <= l && a[mid] <= r){
                    cnt++;
                    l = a[mid];
                    r = ps;
                    continue;
                }
                else{
                    flag = 1;break;
                }
            }
        }
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
