#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int n; cin>>n;
    while(n--){
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        a = abs(c - a);
        b = abs(d - b);

        cout<<fixed<<setprecision(2);
        float resp=0; 
        resp = static_cast<float>(b)/a;
        cout<<resp<<endl;
    }

    return 0;
}