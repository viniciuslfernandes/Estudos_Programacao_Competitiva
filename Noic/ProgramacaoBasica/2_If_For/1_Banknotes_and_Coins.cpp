#include <bits/stdc++.h>
using namespace std;

int main(){

    double n; cin>>n;
    n+=0.001;
    vector<int> notas = {100, 50, 20, 10, 5, 2};
    vector<double> moedas = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    cout.precision(2);
    cout.setf(ios::fixed);

    int quantidade=0;
    cout<<"NOTAS:"<<endl;
    for(int i=0; i<6; i++){
        quantidade=n/notas[i];
        n-=quantidade*notas[i];
        cout<<quantidade<<" nota(s) de R$ "<<notas[i]<<".00"<<endl;
    }
    cout<<"MOEDAS:"<<endl;
    for(int i=0; i<6; i++){
        quantidade=n/moedas[i];
        n-=quantidade*moedas[i];
        cout<<quantidade<<" moeda(s) de R$ "<<moedas[i]<<endl;
    }
    
    return 0;
}