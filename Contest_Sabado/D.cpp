#include <bits/stdc++.h>
using namespace std;
int main(){

    string x; 
    cin>>x;

    if(next_permutation(x.begin(), x.end())){
        cout<<x<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}
//Passou apos o contest