#!/usr/bin/env python3

# import os
import random as ra
import readchar as rc

import Funkcje as F
import Klasy as K


def main():
    x = []
    with open('uzytkownicy.txt', 'r') as f:
        for a in f:
            a = a.split(';')
            a.pop()
            x.append([*a])

    Pra = K.Pracownik(*x[0], ra.randrange(1, 10) / 10)

    Gos = K.Gosc(*x[1])

    Adm = K.Administrator(*x[2], ra.randrange(1, 9))

    F.druk(Pra)
    print('\n')
    F.druk(Gos)
    print('\n')
    F.druk(Adm)
    print('\n')

    rc.readchar()

    # x = []
    # with open('uzytkownicy.txt', 'r') as f:
    #     for a in f:
    #         a = a.split(';')
    #         a.pop()
    #         x.append(K.Uzytkownik(*a))
    # loop, ilosc = 1, []
    # for i in range(1, len(x) + 1):
    #     ilosc.append(str(i))
    # while loop == 1:
    #     wybor = "0"
    #     os.system("clear")
    #     print("Wybierz osobę do wyświetlenia: ")
    #     for i, osoby in enumerate(x, start=1):
    #         print(f"\t{str(i) + '.' + osoby.getImieNazwisko()},")
    #     print(
    #         "\n\te - Wyjdź,\n"
    #         "\td - Usuń,\n"
    #         "\tm - Modyfikuj,\n"
    #         "\ta - Dodaj."
    #     )
    #     while wybor not in ilosc:
    #         wybor = input(f"\n{'Wybór': >20}: ")
    #         match wybor:
    #             case 'e':
    #                 exit(1)
    #             case 'd':
    #                 czyUsunie = F._usun(x)
    #                 if czyUsunie == 1:
    #                     ilosc.pop()
    #                 break
    #             case 'a':
    #                 F._dodaj(x)
    #                 ilosc.append(str(len(x)))
    #                 break
    #             case 'm':
    #                 F._modyfikuj(x)
    #                 ilosc.append(str(len(x)))
    #                 break
    #     os.system("clear")
    #     if wybor not in ilosc:
    #         continue
    #     x[int(wybor) - 1].Pokaz()
    #     print("\nKliknij, aby przejść dalej...")
    #     rc.readchar()


if __name__ == '__main__':
    main()
