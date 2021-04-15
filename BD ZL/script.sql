-- Kolanowski Sebastian Informatyka stosowana Rok 1
-- Baza danych pisana dla MariaDB z której korzystam u mnie w domu
DROP DATABASE IF EXISTS Biblioteka;
CREATE DATABASE Biblioteka;

use Biblioteka

CREATE TABLE Czytelnicy(
  nr_czyt INTEGER AUTO_INCREMENT,
  nazwisko VARCHAR (35),
  imie VARCHAR(30),
  miasto VARCHAR(50),
  ulica VARCHAR(50),
  nr_domu VARCHAR(50),
  PRIMARY KEY (nr_czyt)
);

CREATE TABLE Ksiazki(
  nr_ks INTEGER AUTO_INCREMENT,
  tytul VARCHAR(200),
  autor VARCHAR(150),
  PRIMARY KEY (nr_ks)
);

CREATE TABLE Wypozyczenia(
  id INTEGER AUTO_INCREMENT,
  nr_ks INT,
  nr_czyt INT,
  data_w DATE NOT NULL,
  data_z DATE NULL,
  PRIMARY KEY(id),
  FOREIGN KEY(nr_ks) REFERENCES Ksiazki(nr_ks),
  FOREIGN KEY(nr_czyt) REFERENCES Czytelnicy(nr_czyt)
);

INSERT INTO Czytelnicy VALUES
  (1, "Kowalski", "Jan", "Łódź", "Kochanowskiego", "20"),
  (2, "Kowal", "Adam", "Łódź", "Stczni", "1"),
  (3, "Koc", "Anna", "Warszawa", "Słoneczna", "15"),
  (4, "Koza", "Maciej", "Piotrków Trybunalski", "Szpitalna", "2");

INSERT INTO Ksiazki VALUES
  (1, "Fraszki", "Jan Kochanowski"),
  (2, "Pan Tadeusz", "Adam Mickiewicz"),
  (3, "Lalka", "Bolesław Prus"),
  (4, "Chłopi", "Władysław Reymont");

INSERT INTO Wypozyczenia VALUES
  (NULL,1,2,"2020-10-01","2021-01-01"),
  (NULL,3,1,"2020-12-20",NULL),
  (NULL,2,3,"2020-09-14","2021-01-10");
