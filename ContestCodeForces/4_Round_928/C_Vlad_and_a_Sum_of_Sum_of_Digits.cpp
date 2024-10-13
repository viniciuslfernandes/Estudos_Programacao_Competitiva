#include <bits/stdc++.h>
using namespace std;
#define MAX 200000;
typedef long long ll;
vector<ll> vet;

ll getSum(int n) {
    ll sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main(){

    vet.push_back(0);
    for(int i=1; i<=200000; i++){
        vet.push_back(vet[i-1] + getSum(i));
    }
    
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<vet[n]<<endl;
    }
    return 0;
}
