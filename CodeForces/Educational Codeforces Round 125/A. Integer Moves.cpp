#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        int d = x * x + y * y;
    	if (d == 0){
    	   cout<<0<<endl;
    	   continue;
    	} 
    	int z = 0;
    	while(z * z < d) z++;
    	if (z * z == d){
    	    cout<<1<<endl; //travelling through the diagonal
    	    continue;
    	}
    	cout<<2<<endl; //first cover x distance then y distance
    }
}
