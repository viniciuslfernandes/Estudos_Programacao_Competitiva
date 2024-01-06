#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    int n, a,b;
    ll l, aux=0, soma=0;
    vector<pair<int, int>> produtos;
    while(true){
        cin>>n;
        if(n==0){
            return 0;
        }
        for(int i=0; i<n; i++){
            cin >>a >>b;
            produtos.push_back(make_pair(a,b));
        }
        cin>>l;
        sort(produtos.begin(), produtos.end());
        
    }
    return 0;
}


