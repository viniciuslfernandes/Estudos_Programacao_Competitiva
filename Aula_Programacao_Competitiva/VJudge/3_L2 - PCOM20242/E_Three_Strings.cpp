#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n;cin>>n;
    while(n--){
        string a, b, c;
        bool teste = 1;
        cin>>a>>b>>c;
        for(int i=0; i<a.size(); i++){
            if(c[i]!=a[i] && c[i]!=b[i]){
                teste=0;    
                break;
            }
        }

        if(teste) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
