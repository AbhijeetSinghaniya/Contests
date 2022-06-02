#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans[i] = i+1;
        }
        if(n == 1){
            cout<<-1<<endl;
            continue;
        }

        int last = arr[0];
        int s = 0, e = 0,flag = 0;

        for(int i=1;i<n;i++){
            while(i < n && arr[i] == last){
                e = i;
                i++;
            }
            if(e == s){
                flag = 1;
                break;
            }
            rotate(ans.begin()+s,ans.begin()+s+1,ans.begin()+e+1);
            s = e+1;
            e++;i--;
            last = arr[s];
        }

        if(flag == 1){
            cout<<-1<<endl;
            continue;
        }

        for(auto x : ans) cout<<x<<" ";
        cout<<endl;
    }
}
