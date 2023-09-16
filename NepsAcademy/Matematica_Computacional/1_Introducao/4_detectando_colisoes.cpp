#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, d;
    int a1, b1, c1, d1;
    //   x0 y0 x  y
    cin>>a>>b>>c>>d;
    cin>>a1>>b1>>c1>>d1;
    
    if(c<a1 || d<b1 || c1<a || d1<b){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    return 0;
}

