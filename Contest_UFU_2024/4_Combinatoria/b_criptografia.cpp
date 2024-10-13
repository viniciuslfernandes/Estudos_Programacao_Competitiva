#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){

    int n; cin>>n;
    ull resp=0;
    for(int i=n; i>0; i--){
        if(i==n){
            resp=10;
        }
        else{
            resp*=9;
        }
    }
    cout<<resp<<endl;
    return 0;
}