#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void divisibilidade_11(string num);
int main()
{   
    string num; cin>>num;
    divisibilidade_11(num);

    return 0;
}

void divisibilidade_11(string num){
    ll impar=0, par=0;
    string aux;
    for(int i=num.size()-1; i>=0; i--){
        aux=num[i];
        if(i%2==0){
            par=par+stoi(aux);
        }else{
            impar=impar+stoi(aux);
        }
    }
    ll diferenca=impar-par;
    if(diferenca%11==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}
