#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll n; cin>>n;
    while(n--){
        double a, b, c;
        cin>>a>>b>>c;

        if(b<=c){
            if(a>b and a<c){
                cout<<"True"<<endl;
            }else{
                cout<<"False"<<endl;
            }
        }else{
            if(a>c and a<b){
                cout<<"True"<<endl;
            }else{
                cout<<"False"<<endl;
            }
        }

    }

    return 0;
}