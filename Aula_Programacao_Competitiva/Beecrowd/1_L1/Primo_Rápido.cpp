#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x; cin>>n;
    for(int i=0; i<n; i++){
        bool aux = true;
        cin>>x;
        
        if(x==1){
            aux = false;
        }
        else if(x>2){
            for(int j=3; j<sqrt(x); j+=2){
                if(x%j==0){
                    aux=false;
                    break;
                }
            }
        }
        if(aux) cout<<"Prime"<<endl;
        else cout<<"Not Prime"<<endl;


    }


    return 0;
}