#include <bits/stdc++.h>
using namespace std;
int main(){

    double x,ultimo=0;
    cin>>x;
    cout.precision(4);
    cout.setf(ios::fixed);
    cout<<"N[0] = "<<x<<endl;
    ultimo=x;
    for(int i=1; i<100; i++){
        ultimo=ultimo/2;
        cout<<"N["<<i<<"] = "<<ultimo<<endl;
    }   
    return 0;
}