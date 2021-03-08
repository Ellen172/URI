#include<bits/stdc++.h>

int main() {
  int tam=0, i;
  char n[100005];

  scanf("%s", &n);
  tam=strlen(n);

  for (i=0; i<tam; i++){
    if(n[i]=='z' || n[i]=='Z') {
      if((n[i+1]=='e' || n[i+1]=='E') && (n[i+2]=='l' || n[i+2]=='L') && (n[i+3]=='d' || n[i+3]=='D') && (n[i+4]=='a' || n[i+4]=='A')) {
        printf("Link Bolado\n");
        return 0;
      } 
    }
  }
  
  printf("Link Tranquilo\n");
  system("pause");
  return 0;
}