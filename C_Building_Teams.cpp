#include <bits/stdc++.h>
using namespace std;

vector<bool> visitado(100005, false);
vector <int> lista[100005];

void dfs(int vertice) {
    visitado[vertice] = true;
    for (auto i : lista[vertice]) {
        if (!visitado[i]) {
            dfs(i);
        }
    }
}

int main(){

    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        lista[a].push_back(b);
        lista[b].push_back(a);
    }
    
    for (int i = 1; i <= n; i++) {
        if (!visitado[i]) {
            dfs(i);
        }
    }

}