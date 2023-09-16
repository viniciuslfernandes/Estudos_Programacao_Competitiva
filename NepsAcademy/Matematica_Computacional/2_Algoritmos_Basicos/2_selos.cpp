#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){

    ull n; cin>>n;
    
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"S"<<endl;
            return 0;
        }
    }
    cout<<"N"<<endl;
    return 0;
}
