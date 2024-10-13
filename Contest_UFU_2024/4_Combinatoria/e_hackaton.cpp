#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

unsigned long long factorial(int n) {
    return (n == 1 || n == 0) ? 1 : static_cast<unsigned long long>(n) * factorial(n - 1);
}

int main(){

    int n, k;

    while(cin>>n>>k){
        if(n==0 && k==0) break;
        ull resp=0;
        resp = factorial(n)/(factorial(k)*factorial(n-k));
        cout<<resp<<endl;
    }

    return 0;
}


