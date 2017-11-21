//2. Učitati troznamenkasti broj. U funkciji izračunati aritmetičku sredinu znamenki i ispisati je u glavnom programu.
#include <stdio.h>

float arsr(int a) {
  float val = (float)a;
  float ret = (a/100) + ((a%100)/10) + (a%10);
  return (ret/3);
 }
 
 void main() {
  int a;
  printf("Upisi troznamenkasti broj: "); scanf("%d", &a);
  printf("Aritmeticka sredina znamenka %d jednaka je %.2f",a, arsr(a)); //Moguce je koristiti i vrijednost (npr. float) i funkciju koja vraca istu vrijednost na istome mjestu u C kodu.
 }
