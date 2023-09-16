#include <iostream>
using namespace std;
int main(){


    int n, vet[100], aux=0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    int ordenar=0;
    while(ordenar==0){
        ordenar=1;
        for(int i=0; i<n; i++){
            if(vet[i]>vet[i+1]){
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
                ordenar=0;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<vet[i]<<" ";
    }

    return 0;
}