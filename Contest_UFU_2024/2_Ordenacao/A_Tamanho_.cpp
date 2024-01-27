#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<pair<int, string>> vet;
    for(int i=0; i<n; i++){
        string s;
        int x;
        cin>>s;
        x=s.size();
        vet.push_back(make_pair(x, s));
    }
    sort(vet.begin(), vet.end());
    for(int i=0; i<n; i++){
        cout<<vet[i].second<<endl;
    }
    return 0;
}