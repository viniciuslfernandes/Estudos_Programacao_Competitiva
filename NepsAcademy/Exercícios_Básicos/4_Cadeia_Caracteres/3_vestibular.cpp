#include <iostream>
using namespace std;
int main(){

    int n, pontos=0;
    string gabarito, respostas;
    cin>>n;
    cin>>gabarito>>respostas;

    for(int i=0; i<n;i++){
       if(gabarito[i]==respostas[i]){
            pontos++;
       }
    }
    cout<<pontos;
    return 0;
}