#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector<pair<int, int>> coordenadas;
    vector<pair<float, int>> aux;//dist e pos
    for(int i=0; i<n; i++){
        int x, y; cin>>x>>y;
        coordenadas.push_back(make_pair(x, y));
        float dist = sqrt(pow(x,2)+ pow(y,2));
        aux.push_back(make_pair(dist, i));
    }
    sort(aux.begin(), aux.end());
    for(int i=0; i<n; i++){
        cout<<coordenadas[aux[i].second].first<<" "<<coordenadas[aux[i].second].second<<endl;
    }
    return 0;
}