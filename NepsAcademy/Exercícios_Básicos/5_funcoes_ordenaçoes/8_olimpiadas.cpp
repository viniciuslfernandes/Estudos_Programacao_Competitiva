#include <iostream>
using namespace std;


struct pais{
    int ouro, prata, bronze, num_pais;
};

int fun(pais a, pais b){
    
}

int main(){

    int n,m;
    //n=numero de paises; m=numero de modalidades
    pais v[100];

    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>v[i].ouro;
        cin>>v[i].prata;
        cin>>v[i].bronze;
        v[i].num_pais=i+1;
    }

    return 0;
}