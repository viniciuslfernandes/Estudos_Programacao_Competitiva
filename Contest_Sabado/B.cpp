#include <bits/stdc++.h>
using namespace std;

bool teste(int x){
    if(x%4==0 or x%7==0){
        return true;
    }
    return false;
}

int main(){

    string n; cin>>n;
    for(int i=0; i<n.size(); i++){
        if(n[i]!='4' and n[i]!='7'){
            if(!teste(stoi(n))){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}