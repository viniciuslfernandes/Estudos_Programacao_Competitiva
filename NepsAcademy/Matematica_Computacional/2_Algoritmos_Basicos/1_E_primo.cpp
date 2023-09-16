#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool eh_primo(ll x);
int main(){
    ll x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}

    return 0;
}

bool eh_primo(ll x){
  if(x == 1)  return 0;
  for(int i = 2; i*i <= x; ++i){
    if(x % i == 0){ 
      return 0;
    }
  }
  return 1;
}  