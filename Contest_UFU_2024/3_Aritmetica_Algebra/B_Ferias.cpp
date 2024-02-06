#include <bits/stdc++.h>
using namespace std; 
typedef unsigned long long ull;
int main(){

    int n; cin>>n;
    while(n--){
        int a;
        ull t, i;
        cin>>t>>i>>a;
        ull cont=1;
        ull sum=i;
        while(sum<t){
            i+=a;
            sum+=i;
            cont++;
        }
        cout<<cont<<endl;
    }
    return 0;
}