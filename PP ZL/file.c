#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
FILE *fp;
int c;
char napis[30];
printf("Podaj nazwe pliku do utworzenia np. 'tekst.txt' : ");
gets(napis);
argv[1]=napis;
if (argv[1] == NULL) {
fprintf (stderr, "Nie podano nazwy pliku do zapisu\n");
exit (-1);
}
fp = fopen (argv[1], "w");
if (!fp){
fprintf (stderr, "Nie moge otworzyc pliku %s\n", argv[1]);
exit (-1);
}
printf("Wcisnij Ctrl+D lub Ctrl+Z aby zakonczyc\n");
while ( (c = fgetc(stdin)) != EOF) {
fputc (c, stdout);
fputc (c, fp);
}
fclose(fp);
scanf("%d",c);
return 0;
}
