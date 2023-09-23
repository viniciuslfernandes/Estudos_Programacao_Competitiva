#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    int x,y;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        int sum=0;
        if(x<y){
            for(int j=x+1; j<y; j++){
                if(j%2!=0){
                    sum+=j;
                }
            }
        }
        else{
            for(int j=y+1; j<x; j++){
                if(j%2!=0){
                    sum+=j;
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}