#include <iostream>
using namespace std;

int main(){

    string palavra, inverso;

    getline(cin>>ws,palavra);
    for(int i=palavra.size()-1; i>=0; i--){
        if(palavra[i]==','||palavra[i]=='~'|| palavra[i]=='!'||palavra[i]=='´'||palavra[i]=='?'||palavra[i]==' '){
            palavra.erase(i);
        }
        inverso=inverso+palavra[i];
    }
    /*for(int i=0; i<palavra.size(); i++){
        tolower(palavra[i]);
        tolower(inverso[i]);
    }*/
    cout<<palavra<<endl;
    cout<<inverso<<endl;
    if(palavra==inverso){
        cout<<"sim"<<endl;
    }
    else{
        cout<<"nao"<<endl;
    }
    
    return 0;
}