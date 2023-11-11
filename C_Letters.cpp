#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    //n=num de dormitorios  
    ll n, m; cin>>n>>m;
    vector <ll> dormitorio(n+1);
    dormitorio[0]=0;

    for(int i=1; i<=n; i++){
        cin>>dormitorio[i];
        dormitorio[i]+= dormitorio[i-1];
    }

    ll qrt=1;
    for(int i=1; i<=m; i++){
        ll num; cin>>num;
        while(dormitorio[qrt]<num){
            qrt++;
        }
        cout<<qrt<<" "<<num-dormitorio[qrt-1]<<endl;
    }
    return 0;
}