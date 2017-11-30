//9. Učitati rečenicu. U funkciji ispitati da li je učitano više  malih ili velikih slova (prebrojavanje – u glavnom programu).
#include <stdio.h>
#include <string.h>
void cpr(int a, int b) {
  if (a > b)
    printf("Ucitano je vise velikih slova.");
  else
    printf("Ucitano je vise malih slova.");    
}

main() {
  char a[100];
  int b = 0, c = 0, i;
  gets(a);
  for (i = 0; i < 100; i++) {
    if ((int)a[i] >= 65 && (int)a[i] <= 90) b++;
    if ((int)a[i] >= 97 && (int)a[i] <= 122) c++;
  }
  cpr(b, c);
}
