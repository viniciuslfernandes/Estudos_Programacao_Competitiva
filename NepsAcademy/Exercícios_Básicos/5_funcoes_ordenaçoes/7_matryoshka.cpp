#include <iostream>
using namespace std;

int main(){

    long long n;
    int j=0, cont=0;

    cin>>n;
    int ordem[n], menor=0, valores[100], x=0;

    for(int i=0; i<n; i++){
        cin>>ordem[i];
    }
    
    for(int i=0; i<n; i++){
        if(ordem[i]>ordem[i+1] && i+1<n){
            cont++;
            menor=ordem[i+1];
            for(int j=0; j<n; j++){
                if(menor>=ordem[j]){
                    menor=ordem[j];
                }
            }
            valores[x]=menor;
            x++;
            valores[x]=ordem[i];
            x++;
        }
    }
    cout<<cont<<"\n";
    for(int i=0; i<cont; i++){
        cout<<valores[i]<<" ";
    }


    return 0;
}