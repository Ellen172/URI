#include<bits/stdc++.h>
using namespace std;

int main() {
    int l;
    double mat[12][12], soma=0;
    char t;
    cin >> l;
    cin >> t;

    for(int i=0; i<12; i++){
        for (int j=0; j<12; j++){
            cin >> mat[i][j];
            if(i==l){
                soma+=mat[i][j];
            }
        }
    }

    if(t=='S'){
        printf("%.1lf\n", soma);
    }
    else {
        printf("%.1lf\n", soma/12);
    }

    return 0;
}
