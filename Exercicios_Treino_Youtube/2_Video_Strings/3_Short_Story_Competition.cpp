#include <bits/stdc++.h>
using namespace std;
int main(){

    //n = num de palavras     l=num de linhas    c= num max de caracteres por linha
    int n, l, c; 
    while(cin>>n>>l>>c){
        int paginas=1, linhas=1, caracteres=0;
        string str;
        for(int i=0; i<n; i++){
            cin>>str;
            if(caracteres+str.size()<=c){
                caracteres+=str.size()+1;
            }else{
                caracteres=str.size()+1;
                linhas++;
                if(linhas>l){
                    paginas++;
                    linhas=1;
                }
            }
        }
        cout<<paginas<<endl;
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1222