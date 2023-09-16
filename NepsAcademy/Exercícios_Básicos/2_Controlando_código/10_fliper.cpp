#include <iostream>
using namespace std;
int main(){

    int p,r;
    cin>>p>>r;

    if(p==1){
        if(r==1){
            cout<<("A\n");
        }else{
            cout<<("B");
        }
    }else{
        cout<<("C");
    }

    return 0;
}