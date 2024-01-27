#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    bool tam=false, maiusculo=false, minusculo=false, num=false;
    if(s.size()>=8) tam=true;

    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])) maiusculo=true;
        else if(islower(s[i])) minusculo=true;
        else if(isalnum(s[i])) num=true;
    }
    if(tam && maiusculo && minusculo && num) cout<<"senha valida"<<endl;
    else{
        if(!tam) cout<<"minimo de 8 caracteres"<<endl;
        if(!maiusculo) cout<<"letra maiuscula"<<endl;
        if(!minusculo) cout<<"letra minuscula"<<endl;
        if(!num) cout<<"numero"<<endl;
    }

    return 0;
}