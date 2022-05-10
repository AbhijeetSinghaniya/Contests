#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int l=0,r=n-1;
        
        while(l < r){
            if(s[l] > s[r]){
                swap(s[l],s[r]);
            }
            l++;r--;
        }
        
        int flag = 0;
        for(int i=0;i<n-1;i++){
            if(s[i] > s[i+1]){
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<"YES"<<endl;
    }
	return 0;
}
