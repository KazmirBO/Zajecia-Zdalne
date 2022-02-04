#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const int n = 20;
  int i, a[n], wybor;
  srand(time(NULL));
  for (i = 0; i < n; i++) {
    if (i == 100) {
      printf("\nPodaj a[%d]:", i);
      scanf("%d", &a[i]);
    } else {
      a[i] = rand() % 81 - 20;
      printf("a[%d]=%4d\n", i, a[i]);
    }
  }
  wybor = 4;
  switch (wybor) {
  case 1: {
    int min = a[n - 1], max = a[n - 1];
    for (i = n - 2; i >= 0; i--) {
      if (a[i] < min)
        min = a[i];
      if (a[i] > max)
        max = a[i];
    }
    printf("\nMinimum w tablicy to: %d, a maximum to  %d", min, max);
    break;
  }
  case 2: {
    int suma = 0;
    i = n - 1;
    do {
      suma = suma + a[i];
      i--;
    } while (i >= 0);
    printf("\nSuma: %d, Sr arytmetyczna wynosi: %.2f\n", suma, (float)suma / n);
    break;
  }
  case 3: {
    i = 0;
    int mniej = 0, wiecej = 0;
    do {
      if (a[i] < 0)
        mniej++;
      else if (a[i] >= 0)
        wiecej++;
      i++;
    } while (i < n);
    printf("Wiecej: %d, mniej: %d\n", wiecej, mniej);
    break;
  }
  case 4: {
    int k = 0, j = 0, temp = 0;
    for (k = 0; k < n; k++) {
      for (j = 0; j < k; j++) {
        if (a[k] < a[j]) {
          temp = a[k];
          a[k] = a[j];
          a[j] = temp;
        }
      }
    }
    for (k = 0; k < n; k++) {
      printf("Tab[%2d]= %3d\n", k, a[k]);
    }
  }

  default: {
    printf("\nZly wybor");
  }
  }
  return 0;
}
