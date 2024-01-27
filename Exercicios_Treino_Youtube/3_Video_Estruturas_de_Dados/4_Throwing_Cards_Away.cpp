#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(cin>>n, n!=0){
        queue<int> fila, descartados;
        for(int i=1; i<=n; i++){
            fila.push(i);
        }

        while(fila.size()>=2){
            descartados.push(fila.front());
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
        cout<<"Discarded cards: "<<descartados.front();
        descartados.pop();
        while(!descartados.empty()){
            cout<<", "<<descartados.front();
            descartados.pop();
        }
        cout<<endl;
        cout<<"Remaining card: "<<fila.front()<<endl;
        
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1110