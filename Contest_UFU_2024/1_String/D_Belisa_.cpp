#include <bits/stdc++.h>
using namespace std;
int main(){

    string s; cin>>s;
    string aux; cin>>aux;

    sort(s.begin(), s.end());
    sort(aux.begin(), aux.end());
    
    if(aux==s){
        cout<<"sim"<<endl;
    }else{
        cout<<"nao"<<endl;
    }
    return 0;
}