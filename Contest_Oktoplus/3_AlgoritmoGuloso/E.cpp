#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int aux;
        set <int> x;
        for(int i=0; i<n; i++){
            cin>>aux;
            x.insert(aux);
        }
        if((n-x.size())%2 ==0){
            cout<<(x.size())<<endl;
        }else{
            cout<<(x.size()-1)<<endl;
        }

    }
    return 0;
}
/*FEITO*/