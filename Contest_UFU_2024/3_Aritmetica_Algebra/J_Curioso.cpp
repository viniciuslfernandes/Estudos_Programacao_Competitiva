#include <bits/stdc++.h>
using namespace std;

int main(){

    float i, l;
    cin>>i>>l;

    int n; cin>>n;
    float sum=i;
    for(int i=1; i<n; i++){
        sum+=l;
    }
    cout.precision(1);
    cout.setf(ios::fixed);
    
    cout<<sum<<endl;
    return 0;
}