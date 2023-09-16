#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int n, m, x;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    cin>>m;
    for(int i=0; i<m; i++){
        cin>>x;
        for(int j=0; j<v.size(); j++){
            if(v[j]==x){
                v.erase(v.begin()+j);
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}