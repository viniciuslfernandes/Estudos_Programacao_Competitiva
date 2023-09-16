#include <bits/stdc++.h>
using namespace std;

struct horarios{
    int hora_inic, hora_fim;
};

bool compara(horarios x, horarios y){
    return x.hora_fim<y.hora_fim;
}

int main(){

    int n, aux=1;cin>>n; //consultas
    horarios horario[n];
    for(int i=0; i<n; i++){
        cin>>horario[i].hora_inic>>horario[i].hora_fim;
    }
    sort(horario, horario+n, compara);
   
    int ultimo=horario[0].hora_fim;
    for(int i=0; i<n-1;i++){
        if(horario[i+1].hora_inic<ultimo){
            continue;
        }else{
            aux+=1;
            ultimo=horario[i+1].hora_fim;
            
        }
    }
    cout<<aux<<endl;
    return 0;
}