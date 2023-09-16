#include <bits/stdc++.h>
using namespace std;
int main(){


    int a, b, x; cin>>a>>b;
    set<int>alice, beatriz;

    for(int i=0; i<a; i++){
        cin>>x;
        alice.insert(x);
    }

    for(int i=0; i<b; i++){
        cin>>x;
        beatriz.insert(x);
    }
    int cont=0, cont1=0;
    
    //vejo se as cartas da alice a beatriz tem
    for(set<int>::iterator it=alice.begin(); it!=alice.end(); ++it){
        if(beatriz.find(*it) == beatriz.end()){
            cont+=1;
            beatriz.insert(*it);
        }
    }
    
    for(set<int>::iterator it=beatriz.begin(); it!=beatriz.end(); ++it){
        if(alice.find(*it) == alice.end()){
            cont1+=1;
            alice.insert(*it);
        }
    }
    
    if(cont1<=cont) cout<<cont1<<endl;
    else cout<<cont<<endl;
    return 0;
}