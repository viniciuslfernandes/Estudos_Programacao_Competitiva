#include <iostream>
using namespace std;

int main(){
    int n, cont_coluna, cont_linha, cont_diagonal=0;
    cin>>n;
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        cont_coluna=0;
        cont_linha=0;
        for(int j=0;j<n;j++){
            cont_linha=cont_linha+mat[i][j];
            cont_coluna=cont_coluna+mat[j][i];
            if(i==j){
                cont_diagonal=cont_diagonal+mat[i][j];
            }  
            if(i==j && i==n-1){
                if(cont_coluna!=cont_diagonal || cont_linha!=cont_diagonal){
                    cout<<"-1";
                    return 0;
                }
            }
        }
        if(cont_coluna!=cont_linha){
            cout<<"-1";
            return 0;
        } 
    }
    cout<<cont_coluna;
    return 0;
}