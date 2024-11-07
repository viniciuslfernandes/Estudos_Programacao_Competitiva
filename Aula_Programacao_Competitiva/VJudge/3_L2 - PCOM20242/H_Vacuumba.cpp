#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n; cin>>n;
    while(n--){
        int m; cin>>m;
        float x=0, y=0, angulo=0;

        while(m--){
            float ang, dist; cin>>ang>>dist;
            angulo += ang*(M_PI / 180.0);

            x += (dist* sin(-angulo));
            y += (dist* cos(angulo));
        }
        cout << fixed << setprecision(6) << x << " " << y << endl;
        
    }
    

    return 0;
}