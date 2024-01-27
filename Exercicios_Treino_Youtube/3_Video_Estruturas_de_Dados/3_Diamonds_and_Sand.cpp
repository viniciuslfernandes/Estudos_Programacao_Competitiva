#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        stack<char> pilha, aux;
        int sum=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='<' or s[i]=='>') pilha.push(s[i]);
        }
        while(!pilha.empty()){
            if(pilha.top()=='>'){
                aux.push(pilha.top());
                pilha.pop();
            }else{
                if(!aux.empty()){
                    sum++;
                    aux.pop();
                } 
                pilha.pop();
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1069