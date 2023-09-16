#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c;
    cin>>a>>b>>c;
    a=a*2;
    b=b*3;
    c=c*5;
    cout.precision(1);
    cout.setf(ios::fixed);
    cout<<"MEDIA = "<<(a+b+c)/10<<endl;

    return 0;
}