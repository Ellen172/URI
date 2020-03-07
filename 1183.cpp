#include<bits/stdc++.h>
using namespace std;

int main(){
    char o;
    double m[12][12], v=0;
    scanf("%c", &o);
    for(int i=0; i<12; i++){
        for(int l=0; l<12; l++){
            scanf("%d", m[i][l]);
        }
    }
    if(o='s'){
        for(int i=0; i<12; i++){
            for(int l=0; l<12; l++){
                if(i=1 && l>1){
                    v+=m[i][l];
                }
                else if(i=2 && l>2){
                    v+=m[i][l];
                }
                else if(i=3 && l>3){
                    v+=m[i][l];
                }
                else if(i=4 && l>4){
                    v+=m[i][l];
                }
                else if(i=5 && l>5){
                    v+=m[i][l];
                }
                else if(i=6 && l>6){
                    v+=m[i][l];
                }
                else if(i=7 && l>7){
                    v+=m[i][l];
                }
                else if(i=8 && l>8){
                    v+=m[i][l];
                }
                else if(i=9 && l>9){
                    v+=m[i][l];
                }
                else if(i=10 && l>10){
                    v+=m[i][l];
                }
                else if(i=11 && l>11){
                    v+=m[i][l];
                }
            }
        }
    }
    printf("%.1lf", v);
}
