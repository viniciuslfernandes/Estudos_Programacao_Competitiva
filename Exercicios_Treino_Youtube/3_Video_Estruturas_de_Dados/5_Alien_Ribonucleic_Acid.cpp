#include <bits/stdc++.h>
using namespace std;

bool combinacao(char a, char b){
    if(a>b) swap(a,b); //swap troca os valores entre as duas variaveis a=b e b=a

    if((a=='C' and b=='F') or (a=='B' and b=='S')) return true;
    else return false;
}

int main(){
    
    string s;
    while(cin>>s){
        stack<char> pilha;
        int cont=0;
        for(int i=0; i<(int)s.size(); i++){
            if(!pilha.empty() && combinacao(pilha.top(), s[i])){
                cont++;
                pilha.pop();
            }
            else{
                pilha.push(s[i]);
            }
        }
        cout<<cont<<endl;
    }

    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1242