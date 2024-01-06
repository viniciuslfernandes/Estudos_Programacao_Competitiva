#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vector<pair<int, int>> vet;
    for(int i=0; i<n; i++){
        int a, d; cin>>a>>d;
        vet.push_back(make_pair(a,d));
    }
    sort(vet.begin(), vet.end());
    ll aux=0, tot=0;
    
    for(int i=0; i<n; i++){
        aux+=vet[i].first;
        tot+=vet[i].second - aux;
    }
    cout<<tot<<endl;
    return 0;
}