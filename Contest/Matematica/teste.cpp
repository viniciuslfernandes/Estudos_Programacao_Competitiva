#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int solve(int n);

int main()
{
    ull n;
    while(cin >> n){
        
    }
    cout<<solve(n)<<"\n";

    return 0;
}

int solve(int n) {
    if(n<=1){
        return 1;
    }
    return solve(n-1);
}
