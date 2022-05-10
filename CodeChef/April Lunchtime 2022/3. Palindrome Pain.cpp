#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if(x%2 == 1 && y%2 == 1){
            cout<<-1<<endl;
            continue;
        }
        
        string s1 = "",s2 = "";
        int n = x+y;
        s1.insert(0,n,'a');
        s2.insert(0,n,'b');
        
        if(x%2 == 0 && y%2 == 0){
            y = y/2;
            int i=0;
            while(y--){
                s1[i] = 'b';
                s1[n - 1 - i] = 'b';
                i++;
            }
            x = x/2;
            i = 0;
            while(x--){
                s2[i] = 'a';
                s2[n - 1 - i] = 'a';
                i++;
            }
            cout<<s1<<endl<<s2<<endl;
            continue;
        }
        if(x%2 == 1 && y%2 == 0){
            if(x == 1){
                cout<<-1<<endl;
                continue;
            }
            y = y/2;
            int i=0;
            while(y--){
                s1[i] = 'b';
                s1[n - 1 - i] = 'b';
                i++;
            }
            x = x/2;
            i = 0;
            while(x--){
                s2[i] = 'a';
                s2[n - 1 - i] = 'a';
                i++;
            }
            s2[n/2] = 'a';
            cout<<s1<<endl<<s2<<endl;
            continue;
        }
        
        if(x%2 == 0 && y%2 == 1){
            if(y == 1){
                cout<<-1<<endl;
                continue;
            }
            y = y/2;
            int i=0;
            while(y--){
                s1[i] = 'b';
                s1[n - 1 - i] = 'b';
                i++;
            }
            
            s1[n/2] = 'b';
            x = x/2;
            i = 0;
            while(x--){
                s2[i] = 'a';
                s2[n - 1 - i] = 'a';
                i++;
            }
            cout<<s1<<endl<<s2<<endl;
            continue;
        }
        
    }
	return 0;
}
