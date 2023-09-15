#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void testar(int a, int b);
int main(){

    int n; cin>>n;
    ll a, b; 
    for(int i=0; i<n;i++){
        cin>>a>>b;
        testar(a,b);
    }
    return 0;
}

void testar(int a, int b){
    int aux=0;
    for(int i=a; i<=b; i++){
        if(sqrt(i)== round(sqrt(i))){
            aux+=1;
        }
    }
    cout<<aux<<endl;
    
}