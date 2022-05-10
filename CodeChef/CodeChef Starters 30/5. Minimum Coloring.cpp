#include <bits/stdc++.h>
using namespace std;

void dfs(int i,int j,int r,int c,vector<vector<int>>& arr,int val,int& flag){
    if(i<0 || j<0 || i>=r || j>=c) return;
    
    if(arr[i][j] == 2){
        flag = 2;
        dfs(i+1,j+1,r,c,arr,val,flag);
        dfs(i+1,j-1,r,c,arr,val,flag);
        dfs(i-1,j+1,r,c,arr,val,flag);
        dfs(i-1,j-1,r,c,arr,val,flag);
        return;
    }
    if(arr[i][j] != -1) return;
    
    arr[i][j] = val;
    dfs(i+1,j+1,r,c,arr,val,flag);
    dfs(i+1,j-1,r,c,arr,val,flag);
    dfs(i-1,j+1,r,c,arr,val,flag);
    dfs(i-1,j-1,r,c,arr,val,flag);
}

void dfs2(int i,int j,int r,int c,vector<vector<int>>& arr,int val){
    if(i<0 || j<0 || i>=r || j>=c) return;
    
    if(arr[i][j] != -1) return;
    
    arr[i][j] = val;
    dfs2(i+1,j+1,r,c,arr,val);
    dfs2(i+1,j-1,r,c,arr,val);
    dfs2(i-1,j+1,r,c,arr,val);
    dfs2(i-1,j-1,r,c,arr,val);
}

void dfs3(int i,int j,int r,int c,vector<vector<int>>& arr,int val){
    if(i<0 || j<0 || i>=r || j>=c) return;
    if(arr[i][j] == 2) return;
    if(arr[i][j] != -1) return;
    
    arr[i][j] = val;
    dfs3(i+1,j+1,r,c,arr,val);
    dfs3(i+1,j-1,r,c,arr,val);
    dfs3(i-1,j+1,r,c,arr,val);
    dfs3(i-1,j-1,r,c,arr,val);
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        
        int x1,x2,y1,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        x1--;y1--;x2--;y2--;
        
        vector<vector<int>> arr(r,vector<int> (c,-1));
        
        arr[x1][y1] = 1;
        arr[x2][y2] = 2;
        
        int flag = 1;
        
        dfs(x1+1,y1+1,r,c,arr,1,flag);
        dfs(x1-1,y1+1,r,c,arr,1,flag);
        dfs(x1+1,y1-1,r,c,arr,1,flag);
        dfs(x1-1,y1-1,r,c,arr,1,flag);
        
        if(flag == 1){
            dfs2(x2+1,y2+1,r,c,arr,2);
            dfs2(x2-1,y2+1,r,c,arr,2);
            dfs2(x2+1,y2-1,r,c,arr,2);
            dfs2(x2-1,y2-1,r,c,arr,2);
        }
        
        else{
            if(arr[0][0] == -1) dfs3(0,0,r,c,arr,4);
            else dfs3(0,1,r,c,arr,4);
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}
