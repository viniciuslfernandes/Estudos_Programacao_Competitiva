#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        s[i]=tolower(s[i]);
    }
    string aux = s;
    reverse(s.begin(), s.end());

    if(aux==s){
        cout<<"sim"<<endl;
    }else{
        cout<<"não"<<endl;
    }
    
    return 0;
}