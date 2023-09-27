#include <bits/stdc++.h>
using namespace std;
int main(){

    int aux, position=1, num;
    cin>>aux;
    for(int i=0; i<99; i++){
        cin>>num;
        if(num>aux){
            aux=num;
            position=i+2;
        }
    }
    cout<<aux<<endl<<position<<endl;
    return 0;
}