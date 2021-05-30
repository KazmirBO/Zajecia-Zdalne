--Zadanie 1
SELECT sp.nazwisko, sp.imie, sp.pesel, sp.miejscowosc, wo.nazwa,
ta.nazwawykroczenia, wy.dataw, wy.kwotamandatu, ta.punktykarne
FROM wojewodztwo wo INNER JOIN sprawca sp ON wo.idw=sp.idw
INNER JOIN wykroczenia wy ON wy.idspr=sp.idspr
INNER JOIN taryfikator ta ON wy.idt=ta.idt
WHERE ta.punktykarne>=2
AND sp.miejscowosc like 'C%'
AND (current_date-wy.dataw)<=270
ORDER BY wo.nazwa ASC, wy.kwotamandatu DESC

--Zadanie 2
SELECT wo.nazwa, COUNT(sp.idspr) AS Ilosc
FROM wojewodztwo wo LEFT JOIN sprawca sp ON wo.idw=sp.idw
GROUP BY wo.nazwa
HAVING COUNT(idspr)<=3

--Zadanie 3
SELECT st.nazwa, TRUNC(AVG(wy.kwotamandatu),2) AS "Kwota mandatu"
FROM stopien st INNER JOIN policjant po ON st.ids=po.ids
INNER JOIN wykroczenia wy ON po.idp=wy.idp
WHERE st.nazwa NOT LIKE 'P%'
GROUP BY st.nazwa
ORDER BY "Kwota mandatu" DESC

--Zadanie 4
SELECT sp.nazwisko, sp.imie, sp.pesel, wo.nazwa, wy.dataw, ta.nazwawykroczenia, wy.kwotamandatu
FROM sprawca sp INNER JOIN wojewodztwo wo ON sp.idw=wo.idw
INNER JOIN wykroczenia wy ON sp.idspr=wy.idspr
INNER JOIN taryfikator ta ON ta.idt=wy.idt
WHERE wy.kwotamandatu>(SELECT 0.4*AVG(kwotamandatu)
FROM wykroczenia
WHERE EXTRACT(year FROM dataw)=2020)
ORDER BY wy.kwotamandatu DESC

--Zadanie 5
SELECT sp.pesel, (SELECT SUM(wy.kwotamandatu)
FROM wykroczenia wy
WHERE idspr=sp.idspr AND (current_date-wy.dataw)<=365) AS Kwota
FROM sprawca sp
ORDER BY Kwota DESC

--Zadanie 6
UPDATE taryfikator
SET punktykarne=punktykarne+2
WHERE nazwawykroczenia LIKE 'Przekroczenie dopuszczalnej prędkości o%'
