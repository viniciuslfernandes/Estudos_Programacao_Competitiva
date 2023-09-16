#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool comp(string s);

int main()
{
    int t;cin>>t;

    string exp;

    for(int i=0; i<t;i++){
        getline(cin>>ws, exp);
        if(comp(exp)){
            cout<<"S\n";
        }else{
            cout<<"N\n";
        }
    }
    
    return 0;
}

bool comp(string s) {
    stack <char> pilha;

    for(int i=0; i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{' ){
            pilha.push(s[i]);
        }
        else{
            if(pilha.empty()){
                return false;
            }
            char aux=pilha.top();
            if(s[i]==')' && aux!='(' ||s[i]==']' && aux!='[' ||s[i]=='}' && aux!='{'){
                return false;
            }else{
                pilha.pop();
            }
        }
    }
    if(pilha.empty()){
        return true;
    }
    else{
        return false;
    }
    
}


