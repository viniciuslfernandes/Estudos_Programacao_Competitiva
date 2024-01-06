#include <bits/stdc++.h>
using namespace std;

int main(){

    char c;
    string frase;
    int cont=0;

    cin>>c;
    getline(cin>>ws, frase);

    for(int i=0; i<frase.size(); i++){
        if(tolower(c)==tolower(frase[i])){
            cont++;
        }
    }
    cout<<cont<<endl;

    return 0;
}