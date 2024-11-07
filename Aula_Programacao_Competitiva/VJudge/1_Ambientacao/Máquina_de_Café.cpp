#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int primeiro = b*2 + c*4;
    int segundo = a*2 + c*2;
    int terceiro = a*4 + b*2;

    if(primeiro<=segundo and primeiro<=terceiro){
        cout<<primeiro<<endl;
    }else if(segundo<=primeiro and segundo<=terceiro){
        cout<<segundo<<endl;
    }else{
        cout<<terceiro<<endl;
    }
    
    return 0;
}