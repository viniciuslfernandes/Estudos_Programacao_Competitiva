#include <iostream>
using namespace std;

int main(){

    int n;cin>>n;
    int v[n], cont=0;
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n;i++){
        if(v[i]==1 && i<n-1){
            i++;
            if(v[i]==0 && i<n-1){
                i++;
                if(v[i]==0){
                    cont=cont+1;
                }
                else{
                    i=i-2;
                }
            }
            else{
                i--;
            }
        }
    }
    cout<<cont<<"\n";
    return 0;
}