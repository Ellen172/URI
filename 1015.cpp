#include<bits/stdc++.h>
using namespace std;

int main(){
   double x1, x2, y1, y2;
   double p1, p2;
   scanf("%lf %lf", &x1, &y1);
   scanf("%lf %lf", &x2, &y2);
   p1=(x2-x1)*(x2-x1);
   p2=(y2-y1)*(y2-y1);
   printf("%.4lf\n", sqrt(p1+p2) );
}
