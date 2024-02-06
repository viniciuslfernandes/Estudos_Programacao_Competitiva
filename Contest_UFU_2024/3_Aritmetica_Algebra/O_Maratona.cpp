#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int mdc(ull a, ull b){
  if(b == 0){
    return a;
  }
  return mdc(b, a%b);
}

int main(){

    int n; cin>>n;
    while(n--){
        ull a, b;
        cin>>a>>b;

        cout<<mdc(a, b)<<endl;
    }

    return 0;
}