#include<bits/stdc++.h>

int main () {
    int voltas, placas, total=0;
    scanf("%d %d", &voltas, &placas);

    total=voltas*placas;

    for(int i=1; i<10; i++){
        if( (total*i)%10==0 ) {
            printf("%d", total*i/10);
        }
        else {
            printf("%d", ((total*i)+10)/10);
        }
        if(i<9) {
            printf(" ");
        }
        else {
            printf("\n");
        }
    }

    return 0;
}
