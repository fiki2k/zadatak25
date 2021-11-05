// Program treba naci najveci element u polju.

#include <stdio.h>
int main() {
  int n;
  int i;
  double polje[100];
  printf("Unesi broj elemenanta (od 1 do 100): ");
  scanf("%d", &n);

  for (i = 0; i < n; ++i) {
    printf("Unesi broj%d: ", i + 1);
    scanf("%lf", &polje[i]);
  }

  // trazimo najveci element u ovoj funkcicji.
  for (i = 1; i < n; ++i) {
    if (polje[0] < polje[i]) {
      polje[0] = polje[i];
    }
  }

  printf("Najveci element je = %.2lf", polje[0]);

  return 0;
}
