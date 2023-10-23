#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int maior=1;
    vector <int> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    sort(vet.rbegin(), vet.rend());
    
    for (int i = 0; i < n; i++) {
        if (vet[i] + i + 1 >= maior) {
            maior = vet[i] + i + 1;
        }
    }
    cout<<maior<<endl;
    return 0;
}