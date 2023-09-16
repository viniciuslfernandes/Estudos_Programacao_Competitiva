#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ull mdc(ull a, ull b);

int main (){

  ull a, b, c, d, den=0, soma=0, resp=0;
  cin>>a>>b>>c>>d;
  den=(b*d)/mdc(b,d);
  a=a*(den/b);
  c=c*(den/d);
  soma=a+c;

  resp=mdc(soma, den);
  soma= soma/resp;
  den=den/resp;
  cout<<soma<<" "<<den;

  return 0;
}
/*

*/
ull mdc(ull a, ull b){
  if(b == 0){
    return a;
  }
  return mdc(b, a%b);
}
