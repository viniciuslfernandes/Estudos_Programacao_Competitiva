#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    cout<<n;
    while(n>1){
        if(n%2==0){
            cout<<" "<<n/2;
        }
        else{
            n=(n*3)+1;
            cout<<" "<<n;
        }
    }
    cout<<endl;
    return 0;
}
