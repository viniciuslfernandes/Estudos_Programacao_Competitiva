#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int, string> & a, const pair<int, string> & b){
    if(a.first != b.first) {
        return a.first > b.first;
    }else {
        return a.second < b.second; 
    }
}
int main(){

    vector<pair<int, string>> vet;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string a;
        getline(cin>>ws, a, ',');
        int x;
        cin>>x;
        vet.push_back(make_pair(x,a));

    }
    sort(vet.begin(), vet.end(), comp);

    for(int i=0; i<n; i++){
        cout<<vet[i].second<<endl;
    }
    return 0;
}