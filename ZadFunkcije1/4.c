//4. Učitavati brojeve dok su pozitivni. U funkciji izračunati korijen svakog od učitanih brojeva i ispisati ga u glavnom programu.
#include <stdio.h>
#include <math.h>

float root(int a){
  return sqrt(a);
}
void main() {
  printf("Upisi broj: "); scanf("%d",&a);
  while (a > 0) {
  printf("Korijen upisanog broja glasi: %.2f",root(a));
  printf("Upisi broj: "); scanf("%d",&a);
  }
} 
