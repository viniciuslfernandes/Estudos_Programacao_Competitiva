#include <bits/stdc++.h>
using namespace std;

int main(){

    int b, n; 
    while(cin>>b>>n){
        if(b==0 && n==0) break;
        vector <int> bancos(b+1);
        for(int i=1; i<=b; i++){
            cin>>bancos[i];
        }
        int d, c, v;
        for(int i=1; i<=n; i++){
            cin>>d>>c>>v;
            bancos[d] -= v;
            bancos[c] += v;
        }
        int a=0;
        for(int i=1; i<=b; i++){
            if(bancos[i]<0){
                a=1;
                cout<<"N"<<endl;
                break;
            }
        }
        if(a==0) cout<<"S"<<endl;
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1105
