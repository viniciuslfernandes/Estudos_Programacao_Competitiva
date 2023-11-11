#include <bits/stdc++.h>
using namespace std;

int main(){

    // n = numero de pedaços     d = qunatidade do sanduiche
    int n, d; cin>>n>>d;
    vector <int> vet(2*n);
    for (int i=1; i<=n; i++){
        cin>>vet[i];
        vet[n+i]= vet[i];
    }

    int som=vet[1], tot=0;

    for(int i=1, j=1; i<=2*n;){
        if(j-i > n){
            som-=vet[i];
            i++;
        }
        else if(som<d){
            j++;
            som+=vet[j];
        }
        else if(som>d){
            som-=vet[i];
            i++;
        }
        else if(som==d){
            tot++;
            j++;
            som+=vet[j];
            som-=vet[i];
            i++;
        }
    }

    cout<<tot<<endl;
    return 0;
}
/*
    1 2 3 4 3 1 2 3 4 3


*/