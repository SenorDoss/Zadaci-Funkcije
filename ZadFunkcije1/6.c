//6. Učitavati znakove sve dok se ne učita 0. U funkciji ispitati i ispisati je li učitano slovo, broj ili neki drugi znak.
#include <stdio.h>
void diff(char c) {
  if ((int)c >= 48 && (int)c <= 57) //Mjesta brojeva u ASCII tablici
    printf("Upisani znak je broj.");
  else if (((int)c >= 65 && (int)c <= 90)) || ((int)c >= 97 && (int)c <= 122)) //Velika slova i mala slova su na razlicitim mjestima
    printf("Upisani znak je slovo.");
  else 
    printf("Upisani znak nije ni broj ni slovo.");
}

void main() {
  char c;
  printf("Upisi znak: "); scanf(" %c",&a);
  while (c != '0') {
    diff(c);
    printf("Upisi znak: "); scanf(" %c",&a);
  }
} 
