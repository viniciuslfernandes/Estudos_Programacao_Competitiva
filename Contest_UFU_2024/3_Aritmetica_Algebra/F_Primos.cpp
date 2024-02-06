#include <bits/stdc++.h>
using namespace std;


bool eh_primo(int x);

int main(){

    int a, b;
    cin>>a>>b;
    int i;
    for(i=a; i<=b; i++){
        if(eh_primo(i)){
            cout<<i;
            break;
        }
    }

    for(i=i+1; i<=b; i++){
        if(eh_primo(i)){
            cout<<" "<<i;
        }
    }
    cout<<endl;

    return 0;
}
//crivo 
bool eh_primo(int x){
  if(x == 1)  return 0;
  for(int i = 2; i*i <= x; ++i){
    if(x % i == 0){ 
      return 0;
    }
  }
  return 1;
}  