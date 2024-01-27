#include <bits/stdc++.h>
using namespace std;
int main(){

    string s; getline(cin>>ws, s);
    bool a=false;
    int i=0;
    while(s[i]!='@', i<s.size()){
        if(!isalnum(s[i]) && !isalpha(s[i]) && s[i]!='_' && s[i]!='.'){
            cout<<"0"<<endl;
            return 0;
        }
        i++;
    }
    if(s[i]=='@'){
        a=true;
        i++;
    }
    while(i<s.size()){
        if(!isalpha(s[i]) && s[i]!='.'){
            cout<<"0"<<endl;
            return 0;
        }
    }
    
    cout<<"1"<<endl;
    
    return 0;
}