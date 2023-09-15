#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<bool> visited;
vector<int> adj[12];


void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}

int main()
{
    int n; cin>>n;
    int u,v;
    for(int i=0; i<n; i++){
        cin>>u>>v;
        adj[u].push_back(u);
        adj[v].push_back(v);
    }

    for(int i=0; i<n; i++){

    }
    return 0;
}



