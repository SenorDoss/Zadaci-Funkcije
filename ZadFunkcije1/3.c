//3. Učitavati brojeve dok su veći od 10. U funkciji ispitati parnost svakog od učitanih brojeva.
#include <stdio.h>
void parnost(int a) {
  if (a%2==0) 
    printf("%d je paran broj.",a);
  else 
    printf("%d nije paran broj.",a);
}

void main() {
  int a;
  printf("Upisi broj: "); scanf("%d",&a);
  while (a < 10) {
    parnost(a);
    printf("Upisi broj: "); scanf("%d",&a);
  }
} 
  
