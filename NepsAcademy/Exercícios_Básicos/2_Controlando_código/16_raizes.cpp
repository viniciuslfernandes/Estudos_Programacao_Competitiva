#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;
    float x;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        cout.precision(4);
        cout.setf(ios::fixed);
        cout<<sqrt(x)<<"\n";
    }

    return 0;
}