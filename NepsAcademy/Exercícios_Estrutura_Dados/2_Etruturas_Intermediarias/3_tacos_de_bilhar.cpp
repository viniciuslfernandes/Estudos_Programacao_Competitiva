#include <bits/stdc++.h>
using namespace std;
int main(){ 
    
    int c, aux, cont=0;cin>>c;

    set<int> tacos;

    for(int i=0; i<c; i++){
        cin>>aux;
        if(tacos.find(aux)==tacos.end()){
            cont+=2;
            tacos.insert(aux);
        }else{
            tacos.erase(aux);
        }
    }
    cout<<cont<<endl;
    return 0;
}