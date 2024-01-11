#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n){
        if(n==0) break;
        
        for(int i=0; i<n; i++){
            int cont=0;
            char letra;
            int a, b, c, d, e;
            cin>>a>>b>>c>>d>>e;
            if(a<=127){
                cont++;
                letra='A';
            }
            if(b<=127){
                cont++;
                letra='B';
            }
            if(c<=127){
                cont++;
                letra='C';
            }
            if(d<=127){
                cont++;
                letra='D';
            }
            if(e<=127){
                cont++;
                letra='E';
            }
            
            if(cont!=1) cout<<"*"<<endl;
            else{
                cout<<letra<<endl;
            }
        }
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1129