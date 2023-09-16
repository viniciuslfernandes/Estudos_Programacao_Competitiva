#include <iostream>
using namespace std;
int main(){
    
    int n, l, c;
    //n = quantas vezes os garcons levaram as bandejas
    //l = numero latas, c = numero de copos

    cin>>n;
    int i=0, aux=0;

    while(i<n){
        cin>>l>>c;
        if(l>c){
            aux=aux+c;
        }
        i=i+1;    
    }
    cout<<aux;
    return 0;
}