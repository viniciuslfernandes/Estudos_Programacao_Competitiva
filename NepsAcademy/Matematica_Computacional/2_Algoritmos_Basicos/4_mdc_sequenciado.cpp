#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b);
int main(){

    int n; cin>>n;
    int a, x=0;
    vector<int> vet;

    for(int i=0; i<n; i++){
        cin>>a;
        vet.push_back(a);
    }
    x=vet[0];
    for(int i=1; i<n; i++){
        x=mdc(x, vet[i]);
    }

   
    cout<<x<<endl;
    return 0;
}

int mdc(int a, int b){
  if(b == 0){
    return a;
  }
  return mdc(b, a%b);
}
