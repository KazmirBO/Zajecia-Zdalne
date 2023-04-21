#!/usr/bin/env python3

import os
import Klasy as K


def druk(uzytkownik):
    print(f"{'Imie': >11}: {uzytkownik.getImie()}\n"
          f"{'Nazwisko': >11}: {uzytkownik.getNazwisko()}\n"
          f"{'Adres': >11}: {uzytkownik.getAdres()}\n"
          f"{'PESEL': >11}: {uzytkownik.getPesel()}\n"
          f"{'Data ur.': >11}: {uzytkownik.getData()}\n"
          f"{'Wiek': >11}: {uzytkownik.getWiek()}\n"
          f"{'Płeć': >11}: {uzytkownik.getPlec()}"
          )
    if uzytkownik.getSpecial() != 0:
        special = uzytkownik.getSpecial()
        print(f"{special[0]: >11}: {special[1]}")


def _sprawdz(p):
    if len(p) == 11:
        spr = int(p[10])
        suma = ((1 * int(p[0])) + 3 * int(p[1]) + (7 * int(p[2])) +
                (9 * int(p[3])) + (1 * int(p[4])) + (3 * int(p[5])) +
                (7 * int(p[6])) + (9 * int(p[7])) + (1 * int(p[8])) +
                (3 * int(p[9])))
        lm = (suma % 10)
        kontrola = (10 - lm)
        if (kontrola == 10) or (spr == kontrola):
            return 1
        else:
            print("Podałeś zły PESEL!")
            exit(1)
            return 0
    else:
        print("Podałeś zły PESEL!")
        exit(1)
        return 0


def _imieNazwisko(x):
    for i, osoby in enumerate(x, start=1):
        print(f"\t{str(i) + '.' + osoby.getImieNazwisko()},")
    liczba = []
    for i in range(1, len(x)+1):
        liczba.append(int(i))
    return liczba


def _dodaj(x):
    os.system("clear")
    czyDobry = 0
    imie = input(f"{'Podaj imie': >20}: ")
    nazwisko = input(f"{'Podaj nazwisko': >20}: ")
    adres = input(f"{'Podaj adres': >20}: ")
    while czyDobry == 0:
        try:
            pesel = input(f"{'Podaj PESEL': >20}: ")  # 02070803628
            czyDobry = _sprawdz(pesel)
            x.append(K.Uzytkownik(imie, nazwisko, adres, pesel))
            with open('uzytkownicy.txt', 'a') as f:
                f.write(f"{imie};{nazwisko};{adres};{pesel};\n")
        except ValueError:
            print("Podałeś zły PESEL!")


def _usun(x):
    os.system("clear")
    liczba = _imieNazwisko(x)
    usun = 0
    while usun not in liczba:
        try:
            usun = input("Podaj kogo usunąć (e - przerwij): ")
            if usun == 'e':
                return 0
            else:
                usun = int(usun)
        except ValueError:
            print("Podałeś złą wartość!")
            continue
    pesel = x[usun - 1].getPesel()
    with open("uzytkownicy.txt", "r+") as f:
        new_f = f.readlines()
        f.seek(0)
        for line in new_f:
            if pesel not in line:
                f.write(line)
        f.truncate()
    x.pop(usun-1)
    return 1


def _modyfikuj(x):
    os.system("clear")
    liczba, modyfikuj, zakoncz = _imieNazwisko(x), 0, 0
    for i in range(1, len(x)+1):
        liczba.append(int(i))
    while modyfikuj not in liczba:
        try:
            modyfikuj = input("\nPodaj kogo zmodyfikować (e - przerwij): ")
            if modyfikuj == 'e':
                return 0
            else:
                modyfikuj = int(modyfikuj)
        except ValueError:
            print("Podałeś złą wartość!")
            continue
    while str(zakoncz) != 'e':
        os.system("clear")
        print(f"{'1. Imie <' + x[modyfikuj - 1].getImie() + '>'},\n"
              f"{'2. Nazwisko <' + x[modyfikuj - 1].getNazwisko() + '>'},\n"
              f"{'3. Adres <' + x[modyfikuj - 1].getAdres() + '>'},\n"
              f"{'4. Pesel <' + x[modyfikuj - 1].getPesel() + '>'},\n")
        try:
            zakoncz = input("Wybierz (e - zakończ): ")
            if zakoncz == 'e':
                break
            else:
                zakoncz = int(zakoncz)
        except ValueError:
            print("Podałeś złą wartość!")
            continue
        if zakoncz in [1, 2, 3, 4]:
            match zakoncz:
                case 1:
                    x[modyfikuj - 1].setImie(input(f"{'Imie': >20}: "))
                case 2:
                    x[modyfikuj - 1].setNazwisko(input(f"{'Nazwisko': >20}: "))
                case 3:
                    x[modyfikuj - 1].setAdres(input(f"{'Adres': >20}: "))
                case 4:
                    czyDobry = 0
                    while czyDobry == 0:
                        try:
                            pesel = input(f"{'PESEL': >20}: ")  # 02070803628
                            czyDobry = _sprawdz(pesel)
                        except ValueError:
                            print("Podałeś zły PESEL!")
        else:
            print("Podałeś złą wartość!")
            continue
    noweDane = (
        x[modyfikuj - 1].getImie() + ';'
        + x[modyfikuj - 1].getNazwisko() + ';'
        + x[modyfikuj - 1].getAdres() + ';'
        + x[modyfikuj - 1].getPesel() + ';'
    )
    pesel = x[modyfikuj - 1].getPesel()
    with open("uzytkownicy.txt", "r+") as f:
        new_f = f.readlines()
        f.seek(0)
        for line in new_f:
            if pesel not in line:
                f.write(line)
            else:
                f.write(noweDane)
        f.truncate()
    x.pop(modyfikuj - 1)
    noweDane = noweDane.split(';')
    noweDane.pop()
    x.append(K.Uzytkownik(*noweDane))
