#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int a=0, b=0;
        string aux; cin>>aux;
        for(int i=0; i<int(aux.size()); i++){
            if(aux[i]=='A') a++;
            else b++;
        }
        if(a>b) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }

    return 0;
}