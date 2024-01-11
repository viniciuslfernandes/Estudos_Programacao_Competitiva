#include <bits/stdc++.h>
using namespace std;
int main(){

    string d, s;

    while(cin>>d>>s){
        size_t p = d.find(s);
        if(p!=std::string::npos){
            //nessa comparação o std::string::npos é utilizado para identicar a posicao final
            cout<<"Resistente"<<endl;
        }else{
            cout<<"Nao resistente"<<endl;
        }
    }

    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/2356