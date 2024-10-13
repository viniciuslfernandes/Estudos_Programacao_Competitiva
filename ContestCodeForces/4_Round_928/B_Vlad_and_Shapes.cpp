#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char mat[n][n];
        bool aux=false;
        int linha=0, coluna=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>mat[i][j];
                if(mat[i][j]=='1' and aux==false){
                    linha = i;
                    coluna=j;
                    aux=true;
                }
            }
        }
        aux=false;
        int cont=0, sum=0;
        for(int i=linha; i<n; i++){
            for(int j=coluna; j<n; j++){
                if(mat[i][j]=='1') cont++;
            }
            
            if(aux==false){
                sum=cont;
                cont=0;
                aux=true;
            }else{
                if(sum==cont)cout<<"SQUARE"<<endl;
                else cout<<"TRIANGLE"<<endl;
                break;
            }
        }
    }

    return 0;
}