#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll n; cin>>n;
    cout<<n;
    while(n!=1){
        if(n%2==0){
            n= n/2;
            cout<<" "<<n;
        }else{
            n = (n*3)+1;
            cout<<" "<<n;
        }
    }
    cout<<endl;

    return 0;
}
//https://vjudge.net/contest/663581#problem/A