/*Opis działania programu.
Program pobiera ciąg znaków z plik tekstowego (patrz linia 19 i 27)
(patrz pętla w lini 34) sprawdza, czy znak <napis[i]> wystęuje w bazie znaków
Jeżeli występuje zwiększa <Ilosc[j]> odpowiadającą za sprawdzany znak
W przypadku, kiedy znak nie występuje w bazie jest on dodawany na koniec bazy
Pętla while (patrz linia 26) powtarza się do momentu napotkania końca pliku
Następnie program wpisuje Znaki i ich Ilość do pliku <Plik2> (patrz linia 20)
Kolejno zlicza ilość wyrazów w tekscie
Na koniec wpisuje do pliku liczbę znaków, akapitów oraz wyrazów z tekstu
*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#define nl std::cout<<std::endl
int main(){
  //setlocale( LC_ALL, "pl_PL.UTF-8" );
  std::fstream plik, plik2; // Zmienne dla plików
  plik.open("w-pustyni-i-w-puszczy.txt", std::ios::in); // Tekst do zliczenia
  plik2.open("Znaki.txt", std::ios::out); // Dane wyjściowe
  std::string napis; // String do przechowywania tekstu
  std::vector<int> Znak; // Wektor do przechowywania znaków
  std::vector<int> Ilosc; // Wektor do przechowywania ilosci znaków
  int Count=0, Akapity=0, Wyrazy=0, a, r;
  bool pow;
  while(!plik.eof()){
    std::getline(plik, napis, ' '); // Pobiera ciąg znaków do <space>
    Count++; // Za każdą <space> pobraną w powyższej lini kodu
    a=napis.length(); // Rozmiar pobranego ciągu znaków
    for(int i=0;i<a;i++){
      pow=false;
      // Pętla do sprawdzenia, czy znak występuje w bazie znaków
      r=Znak.size();
      for(int j=0;j<r;j++){
        if(Znak[j]==(int)napis[i]){ // Jeżeli tak - zwiększ ilość o 1
          pow=true;
          Ilosc[j]++;
        }
      }
      if(pow==false){ // Jeżeli nie - dodaj go na koniec wektora
        Znak.push_back((int)napis[i]);
        Ilosc.push_back(1);
      }
    }
  }
  r=Znak.size();
  for(int i=0;i<r;i++){
    if(Znak[i]!=10){ // Znak o (int) 10 oznacza New Line
      plik2<<"Znak: "<<(char)Znak[i]<<" wystepuje: "<<
      Ilosc[i]<<" razy."<<std::endl;
      Count+=Ilosc[i];
    }else Akapity=Ilosc[i]; // Ilosc akapitów
  }
  plik.close();
  plik.open("w-pustyni-i-w-puszczy.txt", std::ios::in);
  while(!plik.eof()){ // Pętla do zliczania wyrazów
    std::getline(plik, napis, ' ');
    a=napis.length();
    Wyrazy++;
  }
  plik2<<std::endl<<"Łączna liczba znaków: "<<Count<<std::endl;
  plik2<<"Łączna liczba akapitów: "<<Akapity<<std::endl;
  plik2<<"Łączna liczba Wyrazów: "<<Wyrazy<<std::endl;
  nl;
  plik.close();
  plik2.close();
  return 0;
}
