#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(cin>>n){
        vector<int> dir(61, 0);
        vector<int> esq(61, 0);
        
        for(int i=0; i<n; i++){
            int m;
            char l;
            cin>>m>>l;
            if(l=='D') dir[m]+=1;
            else esq[m]+=1;
        }
        int sum=0;

        for(int i=30; i<=60; i++){
            sum+=min(dir[i], esq[i]);
        }
        cout<<sum<<endl;
    }   
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1245