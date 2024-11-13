#include<bits/stdc++.h>
using namespace std;

const int64_t INF = 1e18;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m,v;
        cin>>n>>m>>v;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        auto get = [&] () {
            vector<int64_t> b(m+1, INF);
            b[0] = 0;

            int curr = 0, z = 0;
            for(auto val : arr) {
                curr += val;
                if(curr >= v) {
                    b[z+1] = b[z] + curr;
                    z++;
                    if(z >= m) break;
                    curr = 0;
                }
            }
            return b;
        };

        vector<int64_t> ltr = get();
        reverse(arr.begin(), arr.end());
        vector<int64_t> rtl = get();
        int64_t s = accumulate(arr.begin(), arr.end(), 0LL);

        int64_t ans = -1;
        for(int i=0;i<=m;i++) {
            ans = max(ans, s - ltr[i] - rtl[m-i]);
        }
        cout<<ans<<endl;
    }
}
