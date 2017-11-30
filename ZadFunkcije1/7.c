//7. Učitati 10 brojeva u polje. U funkciji izračunati aritmetičku sredinu parnih brojeva i ispisati je u glavnom programu (zbrajanje brojeva – u glavnom programu).
#include <stdio.h>
main() {
  int a[10], b = 0, c = 0, i;
  for (i = 0; i < 10; i++) {
    printf("Upisi %d. broj: ", i + 1); scanf("%d", &a[i]);
    b += a[i];
    c++;
  }
  printf("Aritmeticka sredina upisanih brojeva je: %.2f", arsr(b, c));
}
float arsr(int a, int b) {
  float af = (float)a;
  float bf = (float)b;
  return a/b;
}
