#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, x;
    cin>>n>>x;
    map<int, int> m;
    for(int i=1; i<=n; i++){
        int num;cin>>num;
        if(m.find(num)==m.end()){
            m[num]=i;
        }
    }
    for(auto it=m.begin(); it!=m.end(); it++){
        int a = x - it->first;
        if(m.find(a)!=m.end()){
            if(it->second<m[a]){
                cout<<it->second<<" "<<m[a]<<endl;
                return 0;
            }else{
                cout<<m[a]<<" "<<it->second<<endl;
                return 0;
            } 
        }

    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}