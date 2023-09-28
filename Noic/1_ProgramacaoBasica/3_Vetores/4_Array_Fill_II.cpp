#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    for(int i=0, j=0; i<1000; i++, j++){
        if(j==t) j=0;
        cout<<"N["<<i<<"] = "<<j<<endl;
    }
    return 0;
}