#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    double a, b, c;
    cout.precision(1);
    cout.setf(ios::fixed);
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        cout<<((a*2)+(b*3)+(c*5))/10<<endl;
    }
    return 0;
}