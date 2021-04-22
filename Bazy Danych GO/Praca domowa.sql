SELECT sprawca.imie, sprawca.nazwisko, sprawca.miejscowosc, sprawca.idw, wojewodztwo.nazwa, wykroczenia.dataw, wykroczenia.kwotamandatu, policjant.nazwisko AS NazwiskoP, policjant.imie AS ImieP, taryfikator.nazwawykroczenia
FROM sprawca INNER JOIN wojewodztwo ON sprawca.idw=wojewodztwo.idw
INNER JOIN wykroczenia ON sprawca.idspr=wykroczenia.idspr
INNER JOIN policjant ON policjant.idp=wykroczenia.idp
INNER JOIN taryfikator ON taryfikator.idt=wykroczenia.idt
