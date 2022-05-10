#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int x = n;
        int sum = 0;
        
        while(n != 0){
            sum += n%10;
            n = n/10;
        }
        
        n = x+1;
        int sumx = 0;
        while(n != 0){
            sumx += n%10;
            n = n/10;
        }
        
        if((sum%2 == 0 && sumx%2 != 0) || (sum%2 != 0 && sumx%2 == 0)){
            cout<<x+1<<endl;
        }
        
        else cout<<x+2<<endl;
        
        
    }
	return 0;
}
