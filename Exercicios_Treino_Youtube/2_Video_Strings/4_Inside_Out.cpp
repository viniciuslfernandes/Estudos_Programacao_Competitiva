#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin>>n;
    while(n--){
        string s, esq="", dir="";
        getline(cin>>ws, s);
        int aux = (s.size())/2;
        for(int i=0; i<s.size(); i++){
            if(i<aux){
                esq+=s[i];
            }else{
                dir+=s[i];
            }
        }
        reverse(esq.begin(), esq.end());
        reverse(dir.begin(), dir.end());
        for(int i=0; i<aux; i++){
            cout<<esq[i];  
        }
        for(int i=0; i<aux; i++){
            cout<<dir[i];  
        }
        cout<<endl;
    }
    return 0;
}//NAO FEITO
//https://www.beecrowd.com.br/judge/en/problems/view/1235