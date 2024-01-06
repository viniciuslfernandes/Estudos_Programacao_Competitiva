#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ull n,a,b,c,d;
    long double  media, ano;
    cin>>n;
    cout.precision(2);
    cout.setf(ios::fixed);
    for(int i=0; i<n; i++){
        cin>>a>>b>>c>>d;
        ano=c-a;
        media=(d-b)/ano;
        cout<<media<<endl;
    }

    return 0;
}


