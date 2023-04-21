#!/usr/bin/env python3

import datetime as dt
import Funkcje as F


class Uzytkownik:
    def __init__(self, imie, nazwisko, adres, pesel):
        self.__imie, self.__nazwisko, self.__adres = imie, nazwisko, adres
        self.__PESEL = PESEL(pesel)

        self.__data()

    def __data(self):
        pesel = self.__PESEL.getPesel()
        F._sprawdz(pesel)
        p, r = int(pesel[9]) % 2, int(pesel[0:2])
        m, d = int(pesel[2:4]), int(pesel[4:6])

        if d <= 31 and m <= 32 and d > 0:
            if p == 1:
                self.__plec = "Mężczyzna"
            else:
                self.__plec = "Kobieta"
            if r < 99 and r > 1 and m <= 12:
                pr, m = 1900, int(pesel[2:4])
            elif r >= 0 and r <= 12 and m >= 21 and m <= 29:
                pr, m = 2000, int(pesel[0:4:3])
            elif r >= 0 and r <= 12 and m == 30:
                pr, m = 2000, (m - 20)
            elif r >= 0 and r <= 12 and m == 31:
                pr, m = 2000, (m - 20)
            elif r >= 0 and r <= 12 and m == 32:
                pr, m = 2000, (m - 20)

        year = dt.date.today().year

        self.__wiek = year - (pr + r)
        self.__dataUr = str(d) + '.' + str(m) + '.' + str(pr + r)

    def setImie(self, imie):
        self.__imie = imie

    def getImie(self):
        return self.__imie

    def setNazwisko(self, nazwisko):
        self.__nazwisko = nazwisko

    def getNazwisko(self):
        return self.__nazwisko

    def getImieNazwisko(self):
        return self.__imie + ' ' + self.__nazwisko

    def setAdres(self, adres):
        self.__adres = adres

    def getAdres(self):
        return self.__adres

    def setPesel(self, pesel):
        self.__PESEL.setPesel(pesel)

    def getPesel(self):
        return self.__PESEL.getPesel()

    def getWiek(self):
        return self.__wiek

    def getData(self):
        return self.__dataUr

    def getPlec(self):
        return self.__plec

    def getSpecial(self):
        return 0

    def pokaz(self):
        print(f"{'Imie': >8}: {self.__imie}\n"
              f"{'Nazwisko': >8}: {self.__nazwisko}\n"
              f"{'Adres': >8}: {self.__adres}\n"
              f"{'PESEL': >8}: {self.__PESEL.getPesel()}\n"
              f"{'Data ur.': >8}: {self.__dataUr}\n"
              f"{'Wiek': >8}: {self.__wiek}\n"
              f"{'Płeć': >8}: {self.__plec}"
              )


class PESEL():
    def __init__(self, pesel):
        self.__PESEL = pesel

    def setPesel(self, pesel):
        self.__PESEL = pesel

    def getPesel(self):
        return self.__PESEL


class Pracownik(Uzytkownik):
    def __init__(self, imie, nazwisko, adres, pesel, etat):
        self.__etat = etat
        super().__init__(imie, nazwisko, adres, pesel)

    def setEtat(self, etat):
        self.__etat = etat

    def getEtat(self):
        return self.__etat

    def getSpecial(self):
        return ['Etat', self.__etat]


class Gosc(Uzytkownik):
    def __init__(self, imie, nazwisko, adres, pesel):
        super().__init__(imie, nazwisko, adres, pesel)

    def getPesel(self):
        return "Brak uprawnień!"


class Administrator(Uzytkownik):
    def __init__(self, imie, nazwisko, adres, pesel, uprawnienia):
        self.__uprawnienia = uprawnienia
        super().__init__(imie, nazwisko, adres, pesel)

    def setUprawnienia(self, uprawnienia):
        self.__uprawnienia = uprawnienia

    def getUprawnienia(self):
        return self.__uprawnienia

    def getSpecial(self):
        return ['Uprawnienia', self.__uprawnienia]
