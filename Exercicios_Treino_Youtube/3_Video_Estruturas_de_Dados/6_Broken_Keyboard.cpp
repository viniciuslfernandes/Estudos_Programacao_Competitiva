#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        string texto="";
        int pos=0, tam=0;

        for(int i=0; i<int(s.size()); i++){
            if(s[i]=='['){
                pos=0;
            }
            else if(s[i]==']'){
                pos=tam;
            }
            else{
                texto.insert(pos++, 1, s[i]);
                tam++;
            }
        }
        cout<<texto<<endl;
    }

    return 0;
}