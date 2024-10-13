#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    while(n--){
        int n1, d1, n2, d2;
        char c, aux;
        cin>>n1>>aux>>d1>>c>>n2>>aux>>d2;
        if(c=='+'){
            n1 = (n1*d2) + (n2*d1);
            d1= d1*d2;
            int divisor= __gcd(n1, d1);
            cout<<n1<<"/"<<d1<<" = ";
            n1 /=divisor;
            d1 /=divisor;
            if(d1<0){
                n1*=-1;
                d1*=-1;
            }
            cout<<n1<<"/"<<d1<<endl;
        }else if(c=='-'){
            n1 = (n1*d2) - (n2*d1);
            d1= d1*d2;
            int divisor= __gcd(n1, d1);
            cout<<n1<<"/"<<d1<<" = ";
            n1 /=divisor;
            d1 /=divisor;
            if(d1<0){
                n1*=-1;
                d1*=-1;
            }
            cout<<n1<<"/"<<d1<<endl;
        }else if(c=='*'){
            n1 = n1*n2;
            d1 = d1*d2;
            int divisor= __gcd(n1, d1);
            cout<<n1<<"/"<<d1<<" = ";
            n1 /=divisor;
            d1 /=divisor;
            if(d1<0){
                n1*=-1;
                d1*=-1;
            }
            cout<<n1<<"/"<<d1<<endl;
        }else{
            n1 = n1*d2;
            d1 = n2*d1;
            int divisor= __gcd(n1, d1);
            cout<<n1<<"/"<<d1<<" = ";
            n1 /=divisor;
            d1 /=divisor;
            if(d1<0){
                n1*=-1;
                d1*=-1;
            }
            cout<<n1<<"/"<<d1<<endl;
        }

    }
    return 0;
}
//www.beecrowd.com.br/judge/en/problems/view/1022