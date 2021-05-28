#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
  const int N = 18; // liczba elementów
  int i,j,k,m,x;
  int d[]={0, 9 ,9 ,8 ,6 ,5 ,7 ,7 ,6 ,5 ,2 ,4 ,2 ,3 ,3 ,2 ,2 ,5 ,3};

  // Rozbieramy kopiec

    for(i = N; i > 1; i--)
    {
      swap(d[1], d[i]);
      j = 1; k = 2;
      while(k < i)
      {
        if((k + 1 < i) && (d[k + 1] > d[k]))
          m = k + 1;
        else
          m = k;
        if(d[m] <= d[j]) break;
        swap(d[j], d[m]);
        j = m; k = j + j;
      }
    }

  // Wyświetlamy wynik rozbioru kopca

    cout << endl << "Zbior wyjsciowy po rozbiorze kopca:\n\n";

    for(i = 1; i <= N; i++) cout << setw(2) << d[i];
    cout << endl << endl;

  // Gotowe

    return 0;
  }
