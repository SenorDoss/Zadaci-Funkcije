//5. Učitavati znakove dok se ne učita X. U funkciji ispisati ASCII kod svakog od učitanih znakova.
#inclue<stdio.h>
void ascii(char c) {
  printf("ASCII kod od '%c' je: '%d'.",c,c); //Ako ova linija prijavljuje greske, makar ne bi trebala, ili stavite \ ispred ' ili maknite sve '
}

void main() {
  char c;
  printf("Upisi znak: "); scanf(" %c",&a);
  while (c != 'x' && c != 'X') {
    ascii(c);
    printf("Upisi znak: "); scanf(" %c",&a);
  }
} 
