#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<double> preco={4, 4.5, 5, 2, 1.5};
    int a, b;
    cin>>a>>b;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"Total: R$ "<<preco[a-1]*b<<endl;
    return 0;
}