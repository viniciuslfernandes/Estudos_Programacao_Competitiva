#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> s={1,5,10,25,50,100};
    int v, cont=0; cin>>v;

    while(v!=0){
        if(v-s[5]>=0){
            v=v-s[5];
            cont+=1;
        }
        else if(v-s[4]>=0){
            v=v-s[4];
            cont+=1;
        }
        else if(v-s[3]>=0){
            v=v-s[3];
            cont+=1;
        }
        else if(v-s[2]>=0){
            v=v-s[2];
            cont+=1;
        }
        else if(v-s[1]>=0){
            v=v-s[1];
            cont+=1;
        }
        else if(v-s[0]>=0){
            v=v-s[0];
            cont+=1;
        }
    }
    cout<<cont<<endl;
    return 0;

}