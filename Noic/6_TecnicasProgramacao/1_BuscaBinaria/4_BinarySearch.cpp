#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll n, q; cin>>n>>q;
    map<ll,ll> v; 
    ll x;
    for(ll i=0; i<n; i++){
        cin>>x;
        v.insert(make_pair(x,i));
    }
    
    for(ll i=0; i<q; i++){
        cin>>x;
        auto it=v.find(x);
        if(it!=v.end()){
            cout<<it->second<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}