#include <bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>> str;
    string vogais="", inverso="";
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u'){
            vogais+=str[i];
        }
    }
    inverso = vogais;
    reverse(inverso.begin(), inverso.end());

    for(int i=0; i<vogais.size(); i++){
        if(vogais[i]!=inverso[i]){
            cout<<"N"<<endl;
            return 0;
        }
    }
    cout<<"S"<<endl;
    return 0;
}