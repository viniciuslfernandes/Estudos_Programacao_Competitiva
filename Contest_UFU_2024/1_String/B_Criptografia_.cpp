#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;

    while(n--){
        string s;
        string aux1, aux2;
        getline(cin>>ws, s);
        int tam = s.size()/2;
        for(int i=0; i<s.size(); i++){
            if(i<tam){
                aux1+=s[i];
            }
            else{
                aux2+=s[i];
            }
        }
        reverse(aux1.begin(), aux1.end());
        reverse(aux2.begin(), aux2.end());
        cout<<aux1<<aux2<<endl;
    }

    return 0;
}
