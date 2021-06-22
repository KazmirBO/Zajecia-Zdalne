DROP TABLE A_Kolanowski_Pracownik;
DROP TABLE A_Kolanowski_Stanowisko;
DROP TABLE A_Kolanowski_Prac_Stan;
CREATE TABLE A_Kolanowski_Pracownik(
  IdP INTEGER NOT NULL,
  Imie VARCHAR(50) NOT NULL,
  Nazwisko VARCHAR(70) NOT NULL,
  DataUr DATE NOT NULL,
  Kontakt VARCHAR(50),
  PRIMARY KEY(IdP)
);
CREATE TABLE A_Kolanowski_Stanowisko(
  IdS INTEGER NOT NULL,
  Nazwa VARCHAR(50) NOT NULL,
  PRIMARY KEY(IdS)
);
CREATE TABLE A_Kolanowski_Prac_Stan(
  IdP INTEGER NOT NULL,
  IdS INTEGER NOT NULL,
  DataZat DATE NOT NULL,
  DataZw DATE,
  Wynagrodzenie NUMERIC(11,2) CHECK (Wynagrodzenie>0.0),
  CONSTRAINT Prac_StanPK PRIMARY KEY(IdP,IdS,DataZat),
  CONSTRAINT StanFK FOREIGN KEY (IdS) REFERENCES A_Kolanowski_Stanowisko(IdS),
  CONSTRAINT PracFK FOREIGN KEY (IdP) REFERENCES A_Kolanowski_Pracownik(IdP)
);
CREATE SEQUENCE A_Kolanowski_Pracownik_Seq;
CREATE SEQUENCE A_Kolanowski_Stanowisko_Seq;

INSERT INTO A_Kolanowski_Stanowisko(IdS,nazwa)
VALUES (A_Kolanowski_Stanowisko_Seq.nextval, 'Referent techniczny');

INSERT INTO A_Kolanowski_Stanowisko(IdS,nazwa)
VALUES (A_Kolanowski_Stanowisko_Seq.nextval, 'Prezes klubu');

SELECT A_Kolanowski_Stanowisko_Seq.nextval FROM dual;
SELECT A_Kolanowski_Stanowisko_Seq.currval FROM dual;

INSERT INTO A_Kolanowski_Stanowisko(IdS,nazwa)
VALUES (A_Kolanowski_Stanowisko_Seq.nextval, 'Specjalista administracyjny');

INSERT INTO A_Kolanowski_Stanowisko
VALUES (A_Kolanowski_Stanowisko_Seq.nextval, 'Sprzątaczka');

INSERT INTO A_Kolanowski_Pracownik(IdP,Nazwisko,Imie,DataUr)
VALUES (A_Kolanowski_Stanowisko_Seq.nextval, 'Kowalska','Ewa','2002-02-01');

INSERT INTO A_Kolanowski_Pracownik(IdP,Nazwisko,Imie,DataUr)
VALUES (A_Kolanowski_Stanowisko_Seq.nextval, 'Adamczyk','Wojciech','2001-02-01');

INSERT INTO A_Kolanowski_Prac_Stan VALUES (26,2,'2021-01-01',NULL,999.8);
INSERT INTO A_Kolanowski_Prac_Stan VALUES (27,2,'2020-01-01',NULL,1999.8);

CREATE OR REPLACE VIEW Kolanowski_Sprawca AS
SELECT Imie,nazwisko,miejscowosc
FROM sprawca
WHERE miejscowosc LIKE 'C%'
