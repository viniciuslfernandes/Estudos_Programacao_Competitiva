#include <bits/stdc++.h>
using namespace std;
int main(){

    double a, b, c, pi=3.14159;
    cin>>a>>b>>c;

    cout.precision(3);
    cout.setf(ios::fixed);
    cout<<"TRIANGULO: "<<(a*c)/2<<endl;
    cout<<"CIRCULO: "<<pi*c*c<<endl;
    cout<<"TRAPEZIO: "<<((a+b)*c)/2<<endl;
    cout<<"QUADRADO: "<<b*b<<endl;
    cout<<"RETANGULO: "<<a*b<<endl;

    return 0;
}