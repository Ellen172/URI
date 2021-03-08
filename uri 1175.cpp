#include<bits/stdc++.h>
using namespace std;

int main () {
    int n[20], aux, a=19;

    for (int i=0; i<20; i++){
        cin >> n[i];
    }

    for (int i=0; i<10; i++){
        aux=n[i];
        n[i]=n[a];
        n[a]=aux;
        a--;
    }

    for(int i=0; i<20; i++){
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}
