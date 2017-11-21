//1. Učitati 2 broja. U funkciji ispitati i ispisati u kakvom su odnosu.
#include <stdio.h>
void rel(int a, int b) {
  if (a > b)
    printf("%d je veci od %d",a,b);
  else if (a < b)
    printf("%d je manji od %d",a,b);
  else
    printf("%d je jednak %d",a,b);
}

void main() {
int a, b;
  printf("Upisi 2 broja:\t" scanf("%d", &a); scanf("%d", &b);
  rel(a,b);
}
