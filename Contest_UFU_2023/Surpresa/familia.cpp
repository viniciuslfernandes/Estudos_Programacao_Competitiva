#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int fatorial(int n);

int main()
{
    int n;cin>>n;

    while(n!=0){
        cout<<fatorial(n)<<"\n";
        cin>>n;
    }
    return 0;
}

int fatorial(int n) {
    
    if(n==0){
        return 1;
    }
    else{
        return n* fatorial(n-1);
    }
}
