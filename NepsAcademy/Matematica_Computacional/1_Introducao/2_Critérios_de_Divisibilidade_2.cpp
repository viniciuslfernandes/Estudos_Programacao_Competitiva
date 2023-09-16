#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void divisibilidade_4( string num);
void divisibilidade_9( string num);
void divisibilidade_25( string num);

int main()
{
    string num;cin>>num;
    
    divisibilidade_4(num);
    divisibilidade_9(num);
    divisibilidade_25(num);
    return 0;
}


void divisibilidade_4( string num){
    string aux; 
    if(num.size()>1){
        aux=num[num.size()-2];
        aux=aux+num[num.size()-1];
        int x;
        x=stoi(aux);
        if(x%4==0) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
    else{
        int x;
        x=stoi(num);
        if(x%4==0) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
    
}


void divisibilidade_9( string num){
    string aux;
    ull x=0;
    for(ll i=0; i<num.size(); i++){
        aux=num[i];
        x=x+stoll(aux);
    }
    if(x%9==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}
void divisibilidade_25( string num){
    string aux; 
    if(num.size()>1){
        aux=aux+num[num.size()-2];
        aux=aux+num[num.size()-1];
        int x;
        x=stoi(aux);
        if(x%25==0) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
    else{
        int x;
        x=stoi(num);
        if(x%25==0) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
    
}


