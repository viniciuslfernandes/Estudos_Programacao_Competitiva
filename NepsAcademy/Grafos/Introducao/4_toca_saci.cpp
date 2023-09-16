#include <bits/stdc++.h>
using namespace std;

#define MAX 10000
/*BFS faz uma busca em profundidade*/
void verificar(int linha, int coluna, int matriz[MAX][MAX]);

int main(){

    int n, m, linha=0, coluna=0; cin>>n>>m;
    int mat[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
            if(mat[i][j]==2){
                linha=i;coluna=j;
            }
        }
    }
    verificar(linha, coluna, mat);

    return 0;
}

void verificar(int linha, int coluna, int matriz[MAX][MAX]){
    
}