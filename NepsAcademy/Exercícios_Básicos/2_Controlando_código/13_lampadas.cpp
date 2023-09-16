#include <iostream>
using namespace std;

int main(){

    int n, inter, i1=0, i2=0;
    cin>>n;
    //n = vezes que o interruptor sera apertado

    for(int i=0; i<n;i++){
      cin>>inter;
      if(inter==1) {
        if(i1==0){
            i1=1;
        }
        else{
            i1=0;
        }
      }
      else{
        if(i1==0 && i2==0){
            i1=1;
            i2=1;
        }
        else 
        if(i1==1 && i2==0){
                i1=0;
                i2=1;
            }
        else 
        if(i1==1 && i2==1){
            i1=0;
            i2=0;
        }
        else
        if(i1==0 && i2==1){
            i1=1;
            i2=0;
        }
      } 
    }
    cout<<i1<<"\n";
    cout<<i2<<"\n";
    return 0;
}