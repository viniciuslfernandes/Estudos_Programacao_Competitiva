#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){

    int n; cin>>n;
    ull resp=0;
    for(int i=0; i<n; i++){
        int aux; cin>>aux;
        if(i==0){
            resp=aux;
        }else{
            resp*=aux;
        }
    }
    cout<<resp<<endl;


    return 0;
}