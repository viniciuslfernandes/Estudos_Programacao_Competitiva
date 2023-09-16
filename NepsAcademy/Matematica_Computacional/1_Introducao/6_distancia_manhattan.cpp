#include <bits/stdc++.h>
using namespace std;


int main(){

    
    int xm,ym, xr,yr;
    cin>> xm>>ym>>xr>>yr;
    int cont=0;
    if(xm!=xr){
        cont+=abs(xm-xr);
    }
    if(ym!=yr){
        cont+=abs(ym-yr);
    }
    cout<<cont<<endl;
    return 0;
}