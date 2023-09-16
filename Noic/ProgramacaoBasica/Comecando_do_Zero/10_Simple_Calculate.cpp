#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b, d, e;
    double c, f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"VALOR A PAGAR: R$ "<<(b*c)+ (e*f)<<endl;
    return 0;
}