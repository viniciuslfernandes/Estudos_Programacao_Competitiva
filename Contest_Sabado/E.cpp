#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
        char a[5] ;
        vector<string> str;
        vector<pair<int, int>> hora;
        int x,y;
        for(int i=0; i<n; i++){
            scanf("%d:%d %s.m.",&x,&y,a);
            hora.push_back(make_pair(x,y));
            str.push_back(a);         
        }
        
        for(int i=0; i<n; i++){
            cout<<hora[i].first<<":"<<hora[i].second<<" "<<str[i]<<endl;
        }
    
    return 0;
}