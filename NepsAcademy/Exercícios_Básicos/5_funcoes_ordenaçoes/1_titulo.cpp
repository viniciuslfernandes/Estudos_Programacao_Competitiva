#include <bits/stdc++.h>

using namespace std;

string title(string F){
	
    for(int i=0; i<F.size(); i++){
        tolower(F[i]);
		if(i==0 && F[i]>'Z'){
			F[i]=F[i]-32;
		}
		else if(F[i]==32 && F[i+1]>'Z'){
            F[i+1]=F[i+1]-32;
        }
    }
    
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
