#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

bool e_composto[1000010];
void crivo(int n){
  e_composto[1] = 1;
  for(int i = 2; i <= n; ++i){
    if(!e_composto[i]){
      for(int j = 2; j*i <= n; ++j){
        e_composto[i*j] = 1;
      }
    }
  }
}

int main(){

    ll n; cin>>n;
    crivo(n); 

    
    for(int i = 0; i < Q; ++i){ 
    cin >> a;
    cout << !e_composto[a] << "\n";
    }


    return 0;
}
