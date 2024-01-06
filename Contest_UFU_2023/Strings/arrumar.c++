#include <iostream>
using namespace std;

int main(){

    string palavra, palavra_inverso;

    cin>>palavra;
    for(int i=palavra.size()-1; i>=0; i--){
        palavra_inverso=palavra_inverso+palavra[i];
    }
    
    if(palavra==palavra_inverso){
        cout<<"sim"<<endl;
    }
    else{
        cout<<"nao"<<endl;
    }
    
    return 0;
}