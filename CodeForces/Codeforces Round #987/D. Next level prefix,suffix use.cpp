#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int pref[n + 1];
        fill(pref, pref + n + 1, -1);
        int suff[n+1];
        fill(suff, suff+n+1, n+1);

        for(int i=0;i<n;i++) {
            pref[i+1] = max(pref[i], arr[i]);
        }

        for(int i=n-1;i>=0;i--) {
            suff[i] = min(suff[i+1], arr[i]);
        }

        int ans[n];
        int last = -1;
        for(int i=0;i<n;i++) {
            /*
            If at any point pref[i+1] ≤ suf[i+1], it means:
            All trees to the left have height ≤ pref[i+1]
            All trees to the right have height ≥ suf[i+1]
            This creates a "barrier" that the rabbit cannot cross
            */
            if(pref[i+1] <= suff[i+1]) {
                for(int j=last+1;j<=i;j++) {
                    ans[j] = pref[i+1];
                }
                last = i;
            }
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" \n"[i == n-1];
    }
}
