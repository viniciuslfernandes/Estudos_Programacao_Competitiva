#include <iostream>
using namespace std;
int main(){

    string risada, inverso, risada_vogal;
    cin>>risada;

    for(int i=0; i<risada.size();i++){
        if(risada[i]=='a'|| risada[i]=='e'|| risada[i]=='i'|| risada[i]=='o'|| risada[i]=='u'){
            risada_vogal=risada_vogal+risada[i];
        }
    }

    for(int i=risada_vogal.size(); i>=0; i--){
        inverso=inverso+risada_vogal[i];
    }

    for(int i=0; i<risada_vogal.size(); i++){
        if(risada_vogal[i]!=inverso[i+1]){
            cout<<"N";
            return 0;
        }
    }
    cout<<"S";
    return 0;
}