#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b;
    cin>>a>>b;
    a=a*3.5;
    b=b*7.5;
    cout.precision(5);
    cout.setf(ios::fixed);
    cout<<"MEDIA = "<<(a+b)/11<<endl;
    return 0;
}