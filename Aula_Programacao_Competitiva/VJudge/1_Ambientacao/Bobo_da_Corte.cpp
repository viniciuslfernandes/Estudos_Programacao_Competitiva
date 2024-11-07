#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    int carlos; cin>>carlos;
    bool ganhou = true;
    for(int i=0; i<n-1; i++){
        int aux; cin>>aux;
        if(aux>carlos){
            ganhou=false;
        }
    }
    if(ganhou) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}