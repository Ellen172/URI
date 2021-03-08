#include<bits/stdc++.h>
using namespace std;

int main() {
    double mat[12][12], soma=0;
    char o;
    cin >> o;

    for(int i=0; i<12; i++){
        for (int j=0; j<12; j++){
           cin >> mat[i][j];
        }
    }

    for(int i=0; i<12; i++){
        for (int j=0; j<i; j++){
            soma+=mat[i][j];
        }
    }

    if(o=='S'){
        cout << soma << endl;
    }
    else {
        cout << soma/66 << endl;
    }

    return 0;
}
