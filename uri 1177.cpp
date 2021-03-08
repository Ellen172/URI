#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, x=0;
    cin >> t;

    for(int i=0; i<1000; i++){

        if(x==t){
            x=0;
        }

        printf("N[%d] = %d\n", i, x);
        x++;
    }

    return 0;
}
