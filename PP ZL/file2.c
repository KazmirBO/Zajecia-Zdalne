#include <stdio.h>
int main (int argc, char **argv)
{
FILE *fp = NULL;
int c;
char napis[30];
printf("Podaj nazwe pliku do utworzenia np. 'tekst.txt' : ");
gets(napis);
argv[1]=napis;
fpos_t dlugosc; /* fpos_t to specjalny typ danych, używany do
określania położenia danych w strumieniu */
if (argv[1] == NULL) {
printf ("Nie podano nazwy pliku\n");
return 1;
}
if ((fp=fopen(argv[1], "rb"))==NULL) {
printf ("Błąd otwarcia pliku: %s!\n", argv[1]);
return 1;
}
fseek (fp, 0, SEEK_END); /* ustawiamy wskaźnik na koniec pliku */
fgetpos (fp, &dlugosc);
printf ("Rozmiar pliku: %d\n", dlugosc);
fclose (fp);
scanf("%d",c);
return 0;
}
