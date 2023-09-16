#include <bits/stdc++.h>
using namespace std;


int main(){

    int cont=0, n;cin>>n;
    stack<char> pilha;
    string x={};

    for(int i=0; i<n; i++){
        getline(cin>>ws, x);
        
        for(int j=0; j<x.size(); j++){
            if(x[j]=='{' || x[j]=='}'){
                pilha.push(x[j]);
            }
        }
    }
    while(!pilha.empty() && cont>=0){
        if(pilha.top()=='}'){
            cont+=1;
            pilha.pop();
        }
        if(pilha.top()=='{'){
            cont-=1;
            pilha.pop();
        }
    }
    if(cont==0){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    
    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    int t;cin>>t;
    stack<char>pilha;
    string exp;
    for(int i=0; i<t;i++){
        getline(cin>>ws, exp);
        
    }
   
    return 0;
}




*/