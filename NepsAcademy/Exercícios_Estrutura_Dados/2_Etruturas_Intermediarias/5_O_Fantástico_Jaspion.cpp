#include <bits/stdc++.h>
using namespace std;

int main(){
    //t=n de instancias
    int t; cin>>t;
    //m=numeros de palavras no dicionario    n de linhas na letra da musica
    int m,n;
    map <string, string> aux;
    for(int i=0; i<t; i++){
        cin>>m>>n;
        for(int j=0; j<m; j++){
            string a,b;
            getline(cin>>ws, a);
            getline(cin>>ws, b);
            aux.insert(make_pair(a,b));
        }
        for(int j=0; j<n; j++){
            string a;
            getline(cin>>ws, a);
            
            cout<<a<<endl;
            if(aux.find(a)!=aux.end()){
                cout<<aux.find(a)->second<<endl;
            }
        }
    }

    return 0;
}