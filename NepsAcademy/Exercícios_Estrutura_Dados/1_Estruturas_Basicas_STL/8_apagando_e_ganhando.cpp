#include <bits/stdc++.h>
using namespace std;


int main(){ 
    //n=numeros      d=quant que dever ser apagada
    int n, d, a; 

    while(true){
        cin>>n>>d;
        if(n==0 && d==0){
            return 0;
        }
        string numeros={};
        cin>>numeros;
        
        while(d>0){
            int indice=0;
            char x;
            x=numeros[0];

            for(int i=1; i<d; i++){
                if(numeros[i]<x){
                    x=numeros[i];
                    indice=i;
                }
            }
            numeros.erase(indice);
            d-=1;
        }
        for(int i=0; i<numeros.size(); i++){
            cout<<numeros[i];
        }
        cout<<endl;
        
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
    ll n,d;
    string cont;
    char aux, menor;
    int posicao=0;

    cin>>n>>d;
    
    while(n!=0 && d!=0){
        getline(cin>>ws, cont);
        for(int i=0; i<d; i++){
            menor=cont[i];
            for(int j=0; j<n; j++){
                aux=cont[j];
                if(aux<=menor){
                    menor=aux;
                    posicao=j;
                }
            }
            cont.erase(posicao);
        }
        cin>>n>>d;
    }

    for(int i=0; i<n;i++){
        cout<<cont[i];
    }
    cout<<endl;
    return 0;
}

*/