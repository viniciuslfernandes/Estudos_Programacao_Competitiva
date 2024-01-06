#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, t, x="";
    cin>>s>>t;

    for(int i=0; i<s.size(); i++){
        for(int j=0; j<t.size(); j++){
            if(s[i]==t[j]){
                x=x+t[j];
                break;
            }
        }
    }

    if(s==x){
        cout<<"sim"<<endl;
    }
    else{
        cout<<"nao"<<endl;
    }
    return 0;
}