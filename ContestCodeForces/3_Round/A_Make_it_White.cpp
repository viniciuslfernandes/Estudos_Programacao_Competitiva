#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    while(n--){
        int tamanho; cin>>tamanho;
        string s; cin>>s;
        int i=0, j=tamanho-1;
        for(i=0, j=tamanho-1; i<tamanho, j>=0;){
            if(s[i]!='B') i++;
            if(s[j]!='B') j--;

            if(s[i]=='B' and s[j]=='B') break;
        }
        
        if(i==j) cout<<"1"<<endl;
        else cout<<j+1-i<<endl;
    }
    return 0;
}
//Passou