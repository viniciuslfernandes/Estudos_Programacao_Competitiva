#include <bits/stdc++.h>
using namespace std;

bool cmp_pair(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second){
        return a.first > b.first;
    }
    return a.second > b.second ;
}

int main(){
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.push_back({3, 1});
    vp.push_back({3, 5});
    vp.push_back({3, -1});
    vp.push_back({1, 15});

    sort(vp.begin(), vp.end(), cmp_pair);

    for(auto i : vp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}