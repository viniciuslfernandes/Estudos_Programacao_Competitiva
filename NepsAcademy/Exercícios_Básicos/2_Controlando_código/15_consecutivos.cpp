#include <iostream>
using namespace std;
int main(){

    int n, pontos=1, num, ref, maior_seq=0;
    cin>>n;
    cin>>ref;
    for(int i=0;i<n-1;i++){
        cin>>num;
        if(ref==num){
            pontos=pontos+1;
            if(pontos>maior_seq){
                maior_seq=pontos;
                }
        }
        else if(num>ref || num<ref){
            if(pontos>maior_seq){
                maior_seq=pontos;
                }
            pontos=1;
        }
       
        ref=num;
    }
    cout<<maior_seq;

    return 0;
}