#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;

    string aux="";
    
    int cont;
    for(int i=1; i<s.size(); i++){
        cont=1;
        while(s[i]==s[i-1] && i<s.size()){
            cont++;
            i++;
        }
        if(cont!=1){
            aux+=s[i-1];
            aux+=to_string(cont);
        }else if(i==s.size()-1){
            aux+=s[i-1];
            aux+=s[i];
        }else{
            aux+=s[i-1];
        }
        
    }
  
    if(aux.size()<s.size()){
        cout<<aux<<endl;
    }else{
        cout<<s<<endl;
    }
    return 0;
}