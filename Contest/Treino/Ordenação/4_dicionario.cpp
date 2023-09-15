#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string a);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    getline(cin>>ws, a);

    solve(a);
    return 0;
}

void solve(string a) {
    stringstream x(a);
    string aux;
    while(x>>aux){ 
        aux.push_back(a);
    }
}
