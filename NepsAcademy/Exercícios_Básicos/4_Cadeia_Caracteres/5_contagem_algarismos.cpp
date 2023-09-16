#include <iostream>
using namespace std;

int main(){

    string vet[100];
    int n, soma[100]={};

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<vet[i].size(); j++){
            if(vet[i][j]=='0'){
                soma[0]=soma[0]+1;
            }
            else if(vet[i][j]=='1'){
                soma[1]=soma[1]+1;
            }
            else if(vet[i][j]=='2'){
                soma[2]=soma[2]+1;
            }
            else if(vet[i][j]=='3'){
                soma[3]=soma[3]+1;
            }
            else if(vet[i][j]=='4'){
                soma[4]=soma[4]+1;
            }
            else if(vet[i][j]=='5'){
                soma[5]=soma[5]+1;
            }
            else if(vet[i][j]=='6'){
                soma[6]=soma[6]+1;
            }
            else if(vet[i][j]=='7'){
                soma[7]=soma[7]+1;
            }
            else if(vet[i][j]=='8'){
                soma[8]=soma[8]+1;
            }
            else if(vet[i][j]=='9'){
                soma[9]=soma[9]+1;
            }
        }
    }
    for(int i=0; i<10; i++){
        cout<<i<<"-"<<soma[i]<<"\n";
    }
    return 0;
}