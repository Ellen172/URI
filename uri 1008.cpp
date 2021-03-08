#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, horas;
    double salario;

    scanf("%d %d %lf", &num, &horas, &salario);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario*horas);

    return 0;
}
