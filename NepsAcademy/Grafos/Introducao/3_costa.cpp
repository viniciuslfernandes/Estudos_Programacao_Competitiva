#include <bits/stdc++.h>
using namespace std;

int main (){

    int n,m; cin>>n>>m;
    char mat[n+1][m+1];
    memset(mat, '.', sizeof(mat));
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    int cont=0;
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]=='#'){
                if((j-1>=0 && mat[i][j-1]=='#' ) && (j+1<=m && mat[i][j+1]=='#')&&(i-1>=0 &&mat[i-1][j]=='#')&&(i+1<=n &&mat[i+1][j]=='#')){
                    //cont+=1;
                }
                else{cont+=1;}
            }
        }
        
    }
    cout<<cont<<endl;
    return 0;
}
