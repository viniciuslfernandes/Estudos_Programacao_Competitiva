#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){

    int n, v; cin>>n>>v;
    ull resp=1;
    for(int i=0; i<n; i++){
        resp*=v;
    }
    cout<<resp<<endl;
    return 0;
}