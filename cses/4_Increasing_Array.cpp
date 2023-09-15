#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
   ll n, cont=0; cin>>n;
   ll vet[n];
    
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    for(int i=0; i<n; i++){
        if(i==n-1){
            break;
        }
        else if(vet[i]>vet[i+1]){
            while(vet[i]>vet[i+1]){
                vet[i+1]+=1;
                cont+=1;
            }
        }
    }
    cout<<cont<<"\n";
    return 0;
}

