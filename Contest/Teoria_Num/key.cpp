#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool eh_primo(int x);

int main()
{
    ull n, a,b;
    b=3;
    while(cin>>n){
        for(int i=3; i<=n; i=i+2){
            a=i;
            
        }
    }
    cout<<0<<endl;
    return 0;
}


bool eh_primo(int x){
	int aux=0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            aux=aux+1;
        }
    }
    if(aux==2){
        return 1;
    }
    else{
        return 0;
    }
}