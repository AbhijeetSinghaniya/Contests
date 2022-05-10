#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string hid,guess;
        cin>>hid>>guess;
        
        string ans = "";
        for(int i=0;i<5;i++){
            if(hid[i] == guess[i]) ans += "G";
            else ans += "B";
        }
        cout<<ans<<endl;
    }
	return 0;
}
