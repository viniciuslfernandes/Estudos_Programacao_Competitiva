#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ll n; 
    cin>>n;

    while(n!=1){
        cout<<n<<" ";
        if(n%2 ==0){
            n=n/2;
        }else{
            n=(n*3)+1;
        }
        
    }
    cout<<n<<"\n";
    return 0;
}

