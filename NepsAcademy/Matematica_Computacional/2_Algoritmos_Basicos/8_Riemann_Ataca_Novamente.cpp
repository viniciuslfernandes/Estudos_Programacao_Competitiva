#include <bits/stdc++.h>
using namespace std;

bool e_composto[12000000];
void crivo(int n);

int main(){
    
    crivo(1300000);
    int q;cin>>q;
    int cont=0;
    for(int i=2; i<=q+1; i++){
        int n; cin>>n;
        while(cont<=n){
            if(!e_composto[i]){
                cont++;
            }
            if(cont==q){
                cout<<i<<endl;
                return 0;
            } 
            i++;
        }
    }
    
    return 0;
}

void crivo(int n){
  e_composto[1] = 1;
  for(int i = 2; i <= n; ++i){
    if(!e_composto[i]){
      for(int j = 2; j*i <= n; ++j){
        e_composto[i*j] = 1;
      }
    }
  }
  return;
}







/*
bool e_composto[12000000];
void crivo(int n);
int main(){
    

    int q;cin>>q;

    int n, cont=0, i=2; cin>>n;
    if(n==1) cout<<"2"<<endl;
    
    else{ 
      crivo(12000000);
        while(cont<=n){
        
            if(!e_composto[i]){
                cont++;
            }
            if(cont==n){
                cout<<i<<endl;
                return 0;
            } 
            i++;
        }
    }
    
    return 0;
}

void crivo(int n){
  e_composto[1] = 1;
  for(int i = 2; i <= n; ++i){
    if(!e_composto[i]){
      for(int j = 2; j*i <= n; ++j){
        e_composto[i*j] = 1;
      }
    }
  }
  return;
}
*/