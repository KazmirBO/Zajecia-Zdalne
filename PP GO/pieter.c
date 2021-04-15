#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char napis[100];
    int liczenie[100];
    for(int i=0; i<99; i++)
    {
        liczenie[i]=0;
    }
    char alfabet[24]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','w','x','y','z'};
    int dl=0;
    printf("Podaj napis: ");
    fflush(stdin);
    gets(napis);
    puts(napis);
    dl=strlen(napis);
    for(int i=0; i<dl; i++)
    {
        for(int j=0; j<23; j++)
        {
            if(napis[i]==alfabet[j])
            {
                liczenie[j]++;
            }
        }
    }
    for(int i=0; i<23; i++)
    {
        if(liczenie[i]!=0)
        {
            printf("Ilosc wystapien litery %c: %d\n", alfabet[i], liczenie[i]);
        }
    }
    //printf("\n%c , %c", napis[0], napis[dl-1]);
    return 0;
}//ilosc wystapien danej litery w slowie
