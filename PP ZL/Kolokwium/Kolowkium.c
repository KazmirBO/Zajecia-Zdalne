#include <stdio.h>
#include <stdlib.h>
int main() {
  int Indeks = 13940;
  int *Indeks_w = Indeks;
  char Nazwisko[] = "Kolanowski";
  char *Nazwisko_w = Nazwisko;
  printf("\n\nZadanie 4.1\n");
  printf("\nWartosci:\n\tIndeks = %d, \n\tNazwsko = %s", Indeks, Nazwisko);
  printf("\n\t*Indeks_w = %d, \n\t*Nazwsko_w = %s", Indeks_w, Nazwisko_w);
  printf("\nAdresy:\n\tIndeks = %p, \n\tNazwsko = %p", &Indeks, &Nazwisko);
  printf("\n\t*Indeks_w = %p, \n\t*Nazwsko_w = %p", &Indeks_w, &Nazwisko_w);
  printf("\nRozmiary:\n\tIndeks = %d, \n\tNazwsko = %d", sizeof Indeks,
         sizeof Nazwisko);
  printf("\n\t*Indeks_w = %d, \n\t*Nazwsko_w = %d", sizeof *Indeks_w,
         sizeof *Nazwisko_w);
  printf("\n\nZadanie 4.2\n");
  printf("\nAdresy:\n\t*Indeks_w = %p", Indeks_w);
  printf("\nWartosci:\n\tIndeks = %d,\n\t*Indeks_w = %d", Indeks, Indeks_w);
  printf("\nAdresy:\n\tIndeks = %p", &Indeks);
  printf("\n\nZadanie 4.3\n");
  printf("\nAdresy:\n\tNazwsko_w = %p,\n\tNazwsko_w = %p", Nazwisko_w,
         &Nazwisko_w);
  printf("\nWartosci:\n\tNazwsko = %s", Nazwisko);
  printf("\nAdresy:\n\tNazwsko = %p", &Nazwisko);
  printf("\n\nZadanie 4.4\n");
  printf("\nRozmiary:\n\t*Nazwsko_w = %d", sizeof *Nazwisko);
  printf("\n");
  return 0;
}
