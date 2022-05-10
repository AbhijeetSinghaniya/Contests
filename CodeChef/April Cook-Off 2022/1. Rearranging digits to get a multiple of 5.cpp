#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        string s;
        cin>>s;
        
        int flag = 0;
        for(int i=0;i<d;i++){
            if(s[i] == '5' || s[i] == '0'){
                cout<<"YES"<<endl;
                flag = 1;break;
            }
        }
        if(flag == 0) cout<<"NO"<<endl;
    }
	return 0;
}
