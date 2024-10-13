#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll x, y ,z;
    cin>>x>>y>>z;

    ll resp = pow(x, y);
    resp = resp % z;

    cout<<resp<<endl;
    return 0;
}