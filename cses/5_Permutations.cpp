#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ll n; cin>>n;
    vector<ll> vet;
    if(n<=3 && n>1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    if(n==1){
        cout<<"1\n";
        return 0;
    }
     for(int i=1; i<n; i+=2){
        vet.push_back(n-i);
    }
    vet.push_back(n);
    
    for(int i=2; i<n; i+=2){
        vet.push_back(n-i);   
    }
   
    for(int i=0; i<n; i++){
        cout<<vet[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}

