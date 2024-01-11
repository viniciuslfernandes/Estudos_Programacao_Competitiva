#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1, m1, h2, m2;
    while(cin>>h1>>m1>>h2>>m2){
        if(h1==0 && h2==0 && m1==0 && m2==0) break;
        if(h1==0) h1=24;
        if(h2==0) h2=24;

        int min = abs(h2*60+m2)-(h1*60+m1);
        if(min<=0){
            min+=60*24;
        }
        cout<<min<<endl;
    }
    return 0;

}
//https://www.beecrowd.com.br/judge/en/problems/view/1103