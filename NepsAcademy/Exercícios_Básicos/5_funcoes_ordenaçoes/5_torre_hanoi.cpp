#include <iostream>
using namespace std;

int hanoi(int n, int origem, int dest, int temp){

    if(n==1){
        dest=origem;
    }
    else{
        hanoi(n-1, origem, temp, dest);
        
    }


}
int main(){





    return 0;
}