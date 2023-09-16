#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
bool eh_primo(ull x);
int main(){

    ull n; cin>>n;

    for(int i=2; i<=n; i++){
        if(eh_primo(i)) cout<<i<<" ";
        
    }
    cout<<endl;
    return 0;
}
bool eh_primo(ull x){
  if(x == 1)  return 0;
  for(int i = 2; i*i<= x; ++i){
    if(x % i == 0){ 
      return 0;
    }
  }
  return 1;
}  