#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q; cin>>n>>q;
    map<int,int> v; 
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(v.find(x)==v.end()){
            v[x]=i;
        }
    }
    
    for(int i=0; i<q; i++){
        int a; cin>>a;
        if(v.find(a)!=v.end()){
            cout<<v[a]<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}