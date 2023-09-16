#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long long ll;

int main(){

    //c=num total de prog    n=num total de app disponivel para baixar
    ull c,n; cin>>c>>n;
    ull x,y;
    map<ull,ull> empresa, disponivel;

    for(int i=0; i<c; i++){
       cin>>x>>y;
       empresa.insert(make_pair(x,y));
    }
    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(empresa.find(x)==empresa.end()){
            empresa.insert(make_pair(x,y));
        }else{
            if(empresa[x]<y){
                empresa[x]=y;
                if(disponivel.find(x)==disponivel.end()){
                    disponivel.insert(make_pair(x,y));
                }else{
                    if(disponivel[x]<y){
                        disponivel[x]=y;
                    }
                }
            }
        }
    }
    for (map<ull,ull>::iterator it=disponivel.begin(); it!=disponivel.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
   
    return 0;
}
/*

1 2
5215 1
5215 2
5215 3


*/