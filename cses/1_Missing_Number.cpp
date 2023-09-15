#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    ll n,x;cin>>n;
    vector <ll> seq, num;

    for (int i=0; i<n; i++){
        seq.push_back(i+1);
    }
    for (int i=0; i<n-1; i++){
        cin>>x;
        num.push_back(x);
    }
    sort(num.begin(), num.end());
    
    
    for(int i=0; i<n;i++){
        if(num[i]!=seq[i]){
            cout<<seq[i]<<"\n";
            break;
        }
    }
    return 0;
}


