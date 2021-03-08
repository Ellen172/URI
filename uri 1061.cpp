#include<bits/stdc++.h>

int main() {
    int dia1, dia2, hora1, hora2, min1, min2, seg1, seg2;
    char ponto1, ponto2, ponto3, ponto4;
    char str1[5], str2[5];
    int dia0, hora0, min0, seg0;

    scanf("%s %d", &str1, &dia1);
    scanf("%d %c %d  %c %d", &hora1, &ponto1, &min1, &ponto2, &seg1);
    scanf("%s %d", &str2, &dia2);
    scanf("%d %c %d  %c %d", &hora2, &ponto3, &min2, &ponto4, &seg2);

    seg0=seg2-seg1;
    min0=min2-min1;
    hora0=hora2-hora1;
    dia0=dia2-dia1;

    if(seg0<0){
        seg0=seg0+60;
        min0=min0-1;
    }
    if(min0<0){
        min0=min0+60;
        hora0=hora0-1;
    }
    if(hora0<0){
        hora0=hora0+24;
        dia0=dia0-1;
    }

    printf("%d dia(s)\n", dia0);
    printf("%d hora(s)\n", hora0);
    printf("%d minuto(s)\n", min0);
    printf("%d segundo(s)\n", seg0);


    return 0;
}
