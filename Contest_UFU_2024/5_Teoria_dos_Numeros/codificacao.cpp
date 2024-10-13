#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
  if(b == 0){
    return a;
  }
  return mdc(b, a%b);
}


int main(){

    int n; cin>>n;
    vector <int> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    int i=1;
    while(vet.size()<=2){
        int aux = mdc(vet[i-1], vet[i]);
        vet[i]= aux;
        vet.erase(vet.begin());
    }

    cout<<vet[0]<<endl;

    return 0;
}