//12. Učitati četveroznamenkasti broj. U funkciji ispitati i ispisati da li je znamenka stotica učitanog broja djeljiva sa 3.
#include <stdio.h>
void mod(int a) {
  if (a > 999 && a < 9999) {
    if (((a%1000)/100)%3==0)
      printf("Znamenka stotica upisanog broja djeljiva je s 3.");  
    else
      printf("Znamenka stotica upisanog broja nije djeljiva s 3.");  
    }
    else {
      printf("Ucitani broj nije cetveroznamenkasti.");  
    }
}
main() {
  int a;
  printf("Upisi cetveroznamekasti broj: "); scanf("%d", &a);
  mod(a);
}
