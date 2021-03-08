#include<bits/stdc++.h>
using namespace std;

int main(){
    int distancia;
    double combustivel;

    scanf("%d %lf", &distancia, &combustivel);

    printf("%.3lf km/l\n", distancia/combustivel);

    return 0;
}
