#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n; cin>>n;
    char hash='#', espaco=' ';

    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            cout<<espaco;
        }
        for(int j=0; j<i; j++){
            cout<<hash;
        }
        cout<<endl;
    }

    return 0;
}
