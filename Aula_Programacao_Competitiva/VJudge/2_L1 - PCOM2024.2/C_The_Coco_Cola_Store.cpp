#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;

    while(cin>>n && n!=0){
        int total = 0;

        while(n>=3){
            total += n/3;
            n = n%3 + n/3;
        }
        if(n==2){
            total++;
        }
        cout<<total<<endl;
    }
    return 0;

}