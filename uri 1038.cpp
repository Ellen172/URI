#include<bits/stdc++.h>
using namespace std;

int main(){
    int cod, qtd;
    double total=0;

    scanf("%d %d", &cod, &qtd);

    if(cod == 1){
        total = qtd*4.00;
        printf("Total: R$ %.2lf\n", total);
    }
    if(cod == 2){
        total = qtd*4.50;
        printf("Total: R$ %.2lf\n", total);
    }
    if(cod == 3){
        total = qtd*5.00;
        printf("Total: R$ %.2lf\n", total);
    }
    if(cod == 4){
        total = qtd*2.00;
        printf("Total: R$ %.2lf\n", total);
    }
    if(cod == 5){
        total = qtd*1.50;
        printf("Total: R$ %.2lf\n", total);
    }


    return 0;
}
