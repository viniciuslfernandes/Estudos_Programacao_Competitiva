#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
     
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}


int  main(){

    int l, r; cin>>l>>r;
    for(int i=l; i<=r; i++){
        string s = to_string(i);
        int sum=0;
        for(int j=0; j<int(s.size()); j++){
            sum+= s[j]-'0';
        }
        if(isPrime(i) && isPrime(sum) ){
            cout<<i<<endl;
        }
        
    }
    return 0;
}