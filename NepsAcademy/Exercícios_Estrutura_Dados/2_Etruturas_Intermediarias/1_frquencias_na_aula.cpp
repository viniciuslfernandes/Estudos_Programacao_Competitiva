#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,x;cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        cin>>x;
        if(s.find(x)== s.end()){
            s.insert(x);
        }
        
    }
    cout<<s.size()<<endl;
    return 0;
}