#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; 
    cin>>n;
    string fila; cin>>fila;
    char a=fila[0];
    for(int i=1; i<fila.size(); i++){
        if(a!=fila[i]) a=fila[i];
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
