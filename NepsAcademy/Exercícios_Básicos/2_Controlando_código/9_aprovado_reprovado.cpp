#include <iostream>
using namespace std;
int main(){

    double a,b,media;
    cin>>a>>b;
    media=(a+b)/2;
    
    if(media>=7){
        cout<<"Aprovado";
    }else{
        if(media>=4){
            cout<<"Recuperacao";
        }else{
            cout<<("Reprovado");
        }
    }

    return 0;

}