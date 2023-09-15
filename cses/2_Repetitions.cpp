#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    string a;
    char aux;
    ll cont1=0, cont2=0;
    while(cin >> a){
        cin>>a;
    }
    aux=a[0];
    for(int i=0; i<a.size();i++){
        if(a[i]==aux){
            cont1+=1;
            if(cont1>=cont2){
                cont2=cont1;
            }
        }else{
            cont1=1;
        }
        aux=a[i];
    }
    cout<<cont2<<"\n";
    return 0;
}


