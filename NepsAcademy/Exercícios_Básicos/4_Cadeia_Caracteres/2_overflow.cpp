#include <iostream>
using namespace std;

int main(){

    int n, p, q, resp=0; 
    char c;
    //n=maior numero que o comp ira representar
    cin>>n;
    cin>>p>>c>>q;

    if(c=='+'){
        resp=p+q;
    }
    else if(c=='*'){
        resp=p*q;
    }
    
    if(resp<=n){
        cout<<"OK";
    }
    else {
        cout<<"OVERFLOW";
    }

    return 0;
}