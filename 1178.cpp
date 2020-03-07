#include<bits/stdc++.h>
using namespace std;

int main(){
    double X;
    int N[100];
    scanf("%lf", &X);
    for(int i=0; i<100; i++){
        printf("N[%d] = %.4lf\n", i, X);
        X=X/2;
    }
}
