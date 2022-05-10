#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n],ceven = 0,codd = 0;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2 == 0) ceven++;
            else codd++;
        }
        
        if(ceven == 0 || codd == 0){
            cout<<0<<endl;
            continue;
        }
        
        if(codd%2 == 0){
            int ote = codd/2;
            int eto = ceven;
            
            if(ote <= eto) cout<<ote<<endl;
            else cout<<eto<<endl;
            continue;
        }
        
        cout<<ceven<<endl;
    }
	return 0;
}
