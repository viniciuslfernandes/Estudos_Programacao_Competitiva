#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    string aux="";
    string at="";
    int maior=0;
    while(getline(cin>>ws, s)){
        vector<int> vet;
        int atual=0;
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                atual++;
                at+=s[i];
                
            }else{
                if(atual>=maior){
                    maior=atual;
                    aux=at;
                }
                vet.push_back(atual);
                atual=0;
                at="";
            }
        }
        cout<<vet[0];
        for(int i=1; i<vet.size(); i++){
            cout<<"-"<<vet[i];

        }
        cout<<endl;
    }
    cout<<"The biggest word: "<<aux<<endl;
    
    return 0;
}
//Nao feito
//https://www.beecrowd.com.br/judge/en/problems/view/2108