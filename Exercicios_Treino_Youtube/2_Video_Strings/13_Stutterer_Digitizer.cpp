#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int i=0;
    while(cin>>s){
        if(i!=0) cout<<" ";
        if(s.size()>=4){
            string aux="";
            if(s[0]==s[2] && s[1]==s[3]){
                for(int i=2; i<s.size(); i++){
                    aux+=s[i];
                }
                cout<<aux;
            }else{
                cout<<s;
            }

           
        }else{
            cout<<s;
        }
        i=1;
    }
    cout<<endl;
    return 0;

}
// https://www.beecrowd.com.br/judge/en/problems/view/2815