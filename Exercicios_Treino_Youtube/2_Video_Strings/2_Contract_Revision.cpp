#include <bits/stdc++.h>
using namespace std;
int main(){

    int d;
    while(cin>>d){
        string n; 
        cin>>n;
        if(d==0 && n.size()==1 && n[0]=='0') break;
        string aux="";
        for(int i=0; i<n.size(); i++){
            if((n[i]-'0')!=d){
                aux+=n[i];
            }
        }
        if(aux.size()>0){
            bool teste=false;
            for(int i=0; i<aux.size(); i++){
                if(aux[i]-'0'!=0){
                    cout<<aux[i];
                    teste= true;
                }else if(teste==true){
                    cout<<aux[i];
                }
            }
            if(teste==false) cout<<"0";
            cout<<endl;
            
        }
        else{
            cout<<"0"<<endl;
        }
    }
    
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1120