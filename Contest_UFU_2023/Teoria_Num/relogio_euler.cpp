#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int h, aux=0;cin>>h;
    if(h%12==0){
        cout<<"0\n";
    }
    else{
       
    
        int a=1;
        while(a!=0){
            aux+=1;
            h+=1;
            if(h%12==0){
                cout<<aux<<endl;
                return 0;
            }
        }
    }
    return 0;
}

