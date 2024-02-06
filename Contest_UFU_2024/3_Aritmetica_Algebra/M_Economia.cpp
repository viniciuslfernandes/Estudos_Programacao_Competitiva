#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int n; cin>>n;
    ll sum=1;
    ll atual=1;
    n--;
    while(n--){
        atual= atual*2;
        sum+=atual;
    }
    cout<<sum<<endl;
    return 0;
}