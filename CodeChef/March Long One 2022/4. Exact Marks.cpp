#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        if(x > n*3){
            cout<<"NO"<<endl; 
            continue;
        }
        
        if(x%3 == 0){
            cout<<"YES"<<endl;
            cout<<x/3<<" "<<0<<" "<<n - x/3<<endl;
            continue;
        }
        
        if(x%3 == 1){
            x += 2;
            int a = x/3,b = 2, c;
            
            if(a + b <= n) c = n - a - b;
            else{
                cout<<"NO"<<endl;continue;
            }
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
            continue;
        }
        
        if(x%3 == 2){
            x += 1;
            int a = x/3,b = 1, c;
            
            if(a + b <= n) c = n - a - b;
            else{
                cout<<"NO"<<endl;continue;
            }
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
            continue;
        }
    }
	return 0;
}
