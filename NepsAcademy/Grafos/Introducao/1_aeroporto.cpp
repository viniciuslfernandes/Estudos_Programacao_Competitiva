#include <bits/stdc++.h>
using namespace std;

int main(){

    //a==aeroportos    v=voos
    int a,v;
    int x,y, cont=0;
    
    while(cin>>a>>v){
        if(a==0 && v==0) return 0;
        int mat[a+1][a+1]={};
        cont+=1;
        
        for(int i=0; i<v; i++){
            cin>>x>>y;
            mat[x][y]+=1;
        }
        int congestionamento[a+1]={};
        int maximo=0;
        for(int linha = 1; linha <= a; linha++) {
            for(int coluna = 1; coluna <= a; coluna++) {
                congestionamento[linha] += mat[linha][coluna];
                congestionamento[coluna] += mat[linha][coluna];
                if(congestionamento[linha] > maximo)
                    maximo = congestionamento[linha];
                if(congestionamento[coluna] > maximo)
                    maximo = congestionamento[coluna];
            }
        }
        cout<<"Teste "<<cont<<endl;
        for(int i=1; i<=a; i++){
            if(congestionamento[i]==maximo){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}









