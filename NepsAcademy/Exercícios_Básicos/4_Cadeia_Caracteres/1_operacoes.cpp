#include <iostream>
using namespace std;

int main(){

    char letra;
    double x,y;

    cin>>letra;
    cin>>x>>y;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(letra=='M'){
        cout<<x*y;
    }
    else if(letra=='D'){
        cout<<x/y;
    }

    return 0;
}