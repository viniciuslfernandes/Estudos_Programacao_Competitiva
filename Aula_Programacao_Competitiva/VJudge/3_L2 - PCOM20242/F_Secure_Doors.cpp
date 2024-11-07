#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n; cin>>n;
    map <string, string> mapa;

    for(int i=0; i<n; i++){
        string acao, nome; cin>>acao>>nome;
        if(acao =="entry"){
            if(mapa[nome]==""){
                mapa[nome]="entered";
                cout<<nome<<" "<<mapa[nome]<<endl;
            }else{
                cout<<nome<<" "<<mapa[nome]<<" (ANOMALY)"<<endl;
            }
        }else{
            if(mapa[nome]!=""){
                mapa[nome]="";
                cout<<nome<<" "<<"exited"<<endl;
            }else{
                cout<<nome<<" exited"<<" (ANOMALY)"<<endl;
            }
        }
    }
    

    return 0;
}