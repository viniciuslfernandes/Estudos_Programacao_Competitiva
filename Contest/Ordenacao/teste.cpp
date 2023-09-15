#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
   
    int n; cin>>n;
    string x;
    vector<string> st;
    for(int i=0; i<n; i++){
        getline(cin>>ws, x);
        st.push_back(x);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<st[i].length(); j++){
            st[i][j]=toupper(st[i][j]);
        }
        sort(st[i].begin(), st[i].end());
    }
    for(int i=0; i<n; i++){
        cout<<st[i]<<endl;
    }
    return 0;
}