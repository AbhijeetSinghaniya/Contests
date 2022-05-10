#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        // int a;
        // cin>>a;
        
        char n[101];
        scanf("%100s",n);
        int count = strlen(n);
        
        
        int ecnt=0, ocnt = 0;
        
        for(int i=0;i<count-1;i++){
            if(n[i] == '0' || n[i] == '2' || n[i] == '4' || n[i] == '6' || n[i] == '8') ecnt++;
            else ocnt++;
        }
        int last = 0;
        if(n[count-1] == '0' || n[count-1] == '2' || 
        n[count-1] == '4' || n[count-1] == '6' || n[count-1] == '8') last = 2;
        else last = 1;
        
        if(last == 2){
            if(ecnt > 0){
                cout<<"YES";goto finish;
            }
            else{
                cout<<"NO";goto finish;
            }
        }
        else{
            if(ocnt > 0){
                cout<<"YES";goto finish;
            }
            else{
                cout<<"NO";goto finish;
            }
        }
        
        finish: 
            cout<<endl;
    }
	return 0;
}
