#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{

    int t; cin>>t;
    ll x,y;cin>>x>>y;
    ll mat[x][y];
    mat[0][0]=1;
    

    for(int i=0; i<x; i++){
        for(int j=0; j<y;j++){
            mat[i][j]=1;
        }
    }
    
    return 0;
}


