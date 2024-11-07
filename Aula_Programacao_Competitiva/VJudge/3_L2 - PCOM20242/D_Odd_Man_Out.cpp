#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    
    int n; cin>>n;
    for(int j = 1; j<=n; j++){
        int g; cin>>g;
        map<ll, int> mapa;
        for(int i=0; i<g; i++){
            ll aux; cin>>aux;
            if(mapa[aux]!=0){
                mapa.erase(aux);
            }else{
                mapa[aux]++;
            }
        }
        auto it = mapa.begin();
        cout<<"Case #"<<j<<": "<<it->first<<endl;
    }


    return 0;
}