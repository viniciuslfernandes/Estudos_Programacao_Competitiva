#include <bits/stdc++.h>
using namespace std;

int main(){

     int n;
     string b, a="Carlos, que felicidade!";
     cin>>n;
     b=a[0];
     for(int i=1; i<n; i++){
          b=b+"a";
     }
     a.erase(0, 1);
     b=b+a;
     cout<<b;
     return 0;
}