#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int n;
    while(cin>>n && n!=0){
        priority_queue <int, vector<int>, greater<int> > p; 
        for(int i=0; i<n; i++){
            int num; cin>>num;
            p.push(num);
        }
        int sum = 0;
        while(p.size()>1){
            int c1=p.top();
            p.pop();
            int c2=p.top();
            p.pop();
            sum+=(c1+c2);
            p.push((c1+c2));
        }
        cout<<sum<<endl;
    }

    return 0;
}
