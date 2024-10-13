#include <bits/stdc++.h>
using namespace std;
int main(){

    int a, b, m;
    while(cin>>a>>b>>m, a!=0 or b!=0 or m!=0){
        cout<<(a+b)%m<<endl;
        int resp = (a-b)%m;
        if(resp<0){
            resp+=m;
        }
        cout<<resp<<endl;
        cout<<(a*b)%m<<endl;
    }

    return 0;
}