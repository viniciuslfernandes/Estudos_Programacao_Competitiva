#include <iostream>
using namespace std;
int main(){

    int n, a, aux=0, i=0, resp=0;
    //n=numero de dias, a = numero de acessos
    cin>>n;
    
    while(i<n){
        cin>>a;
        aux= aux+a;
        if(aux>=1000000){
           if(resp==0){
            resp=i+1;
           }
        }
        i=i+1;
    }
    cout<<resp;
    return 0;
}
