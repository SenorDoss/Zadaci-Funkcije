//8. Učitati 10 brojeva u polje. U funkciji ispitati da li je učitano više parnih ili neparnih brojeva (prebrojavanje – u glavnom programu).
#include <stdio.h>
void cpr(int a) {
  if (a > 10-a)
    printf("Ucitano je vise parnih brojeva.");
  else
    printf("Ucitano je vise neparnih brojeva.");    
}

main() {
  int a[10], b = 0, i;
  for (i = 0; i < 10; i++) {
    printf("Ucitaj %d. broj: ", i + 1); scanf("%d", &a[i]);
  }
  for (i = 0; i < 10; i++) {
    if (a[i]%2==0) b++;
  }
  cpr(b);
}
