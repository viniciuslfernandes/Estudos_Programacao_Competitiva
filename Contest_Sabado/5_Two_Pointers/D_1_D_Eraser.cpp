#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    for(int i=0; i<t; i++){
        int n, k, som=0; cin>>n>>k;
        string aux; cin>>aux;
        for(int j=0; j<n; j++){
            if(aux[j]=='B'){
                int x=k-1;
                while(x--){
                    j++;
                }
                som++;
            }
        }
        cout<<som<<endl;
    }

    return 0;
}