#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int cont=0,xr,yr, xc,yc;

    for(int i=0; i<n; i++){
        cin>>xr>>yr;
        cin>>xc>>yc;
        if(xr!=xc){
            cont+=pow(xr-xc, 2);
        }
        if(yr!=yc){
            cont+=pow(yr-yc, 2);
        }
    }
    cout<<cont<<endl;

    return 0;

}