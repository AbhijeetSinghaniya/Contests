#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,m,l;
        cin>>n>>m>>l;
        
        long long int maxbuck = l+n-1;
        long long int buck = l+n-1;
        while(buck >= l && buck <= maxbuck && m != 0){
            if(m >= buck){
                m = m%buck;
            }
            buck = m;;
        }
        cout<<m<<endl;
    }
	return 0;
}
