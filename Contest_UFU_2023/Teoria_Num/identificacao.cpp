#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(ull n);

int main()
{
    ull n;
    while(cin>>n){
        solve(n);
    }
    return 0;
}

void solve(ull n) {
    ull x, y, z;
    for(x=0; x<n; x++){
        y=x+1;
        z=y+1;
        if(x*y*z==n){
            cout<<x<<" "<<y<<" "<<z<<endl;
            return;
        }
    }
    cout<<"0"<<endl;
}
