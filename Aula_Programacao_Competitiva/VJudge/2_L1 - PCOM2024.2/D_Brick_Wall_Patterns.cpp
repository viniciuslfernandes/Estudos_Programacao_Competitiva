#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    vector <int> vet;
    vet.push_back(1);
    vet.push_back(1);

    for(int i=2; i<=50; i++){
        vet.push_back(vet[i-1]+vet[i-2]);
    }
    while(cin>>n && n!=0){
        cout<<vet[n]<<endl;
    }

    return 0;
}