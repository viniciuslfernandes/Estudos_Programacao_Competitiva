#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    while(n--){
        string s; 
        getline(cin>>ws, s);
        string aux="a";
        int sum=0;
        for(int i=0; i<26; i++){
            aux='a'+i;
            size_t p = s.find(aux);
            if(p!=::string::npos){
                sum++;
            }
        }
        if(sum==26) cout<<"frase completa"<<endl;
        else if(sum>=13) cout<<"frase quase completa"<<endl;
        else cout<<"frase mal elaborada"<<endl;
    }
}
//https://www.beecrowd.com.br/judge/en/problems/view/1551