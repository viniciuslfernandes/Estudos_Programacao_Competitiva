#include <bits/stdc++.h>
using namespace std;

bool num_sorte(int n){
    string x;
    x=to_string(n);
    for(int i=0; i<x.size(); i++){
        if(x[i]!='4' && x[i]!='7'){
            return false;
        }
    }
    return true;
}
int main(){


    int x;
    cin>>x;
    for(int i=4; i<=x; i++){
        if(x%i==0 && num_sorte(i)){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

/*PASSOU APÓS O CONTEST*/