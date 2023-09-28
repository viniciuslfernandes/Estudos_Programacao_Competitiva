#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, x, aux=0, pos=0; cin>>n;
    cin>>x;
    aux=x;
    for(int i=0; i<n-1; i++){
        cin>>x;
        if(x<aux){
            aux=x;
            pos=i+1;
        }
    }
    cout<<"Menor valor: "<<aux<<endl;
    cout<<"Posicao: "<<pos<<endl;
    return 0;
}