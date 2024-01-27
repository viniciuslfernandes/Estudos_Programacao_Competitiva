#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    
    map<string, int> freq;
    
    for(int i=0; i<n; i++){
        string x; 
        cin>>x;
        if(freq.find(x)==freq.end()){
            freq.insert(make_pair(x, 1));
        }else{
            freq[x]++;
        }
        
    }
    
    for (map<string,int>::iterator it=freq.begin(); it!=freq.end(); ++it){
        cout<< it->first<< endl;
    }
    return 0;
}