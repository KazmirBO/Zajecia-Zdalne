#include <fstream>
#include <iostream>
#include <regex>
#include <string>

// Klasa HTMLremover zapewnia możliwość usunięcia tagów HTML z podanego ciągu
// znaków
class HTMLremover {
public:
  // Konstruktor HTMLremover ustawia wyrażenie regularne dla usuwania tagów HTML
  HTMLremover() : pattern("\\<.*?\\>"){};

  // Usuwa tagi html z ciągu znaków wejściowego
  void removeHTMLTags(std::string &str);

private:
  // Wyrażenie regularne służące do usuwania tagów HTML
  const std::regex pattern;
};

void HTMLremover::removeHTMLTags(std::string &str) {
  str = regex_replace(str, pattern, "");
}

// Klasa TextExtractor umożliwia wyciąganie tekstu z pliku bez tagów HTML
class TextExtractor {
public:
  // Przekształca wejściowy plik z tagami HTML i zapisuje go do pliku
  // wyjściowego bez tagów HTML
  void extract(std::string in, std::string out);

private:
  // Obiekt HTMLremover, który usuwa tagi HTML
  HTMLremover r;

  // Ciąg znaków do przechowywania aktualnej linii z pliku wejściowego
  std::string line;

  // Strumien wejściowy do pliku
  std::ifstream in_file;

  // Strumien wyjściowy do pliku
  std::ofstream out_file;
};

// extract() wczytuje plik wejściowy, korzysta z obiektu HTML remover, aby
// usunąć tagi HTML, a następnie zapisuje plik wyjściowy bez tagów HTML.
void TextExtractor::extract(std::string in, std::string out) {
  in_file.open(in);
  out_file.open(out);

  // Jeśli pliki wejściowe i wyjściowe są prawidłowo otwarte, przetwarza plik
  if (in_file && out_file) {
    // Dopóki wczytywanie pliku jest możliwe
    while (getline(in_file, line)) {
      // Użyj obiektu HTMLremover do usunięcia tagów HTML z aktualnej linii
      r.removeHTMLTags(line);
      // Zapisz bieżącą linię do pliku wyjściowego
      out_file << line << "\n";
    }

    std::cout << "Kopia skończona \n";
  }
  // Jeśli wczytywanie plików nie powiodło się
  else {
    printf("Nie można odczytać pliku");
  }

  // Zamknij pliki wejściowe i wyjściowe
  in_file.close();
  out_file.close();
}

int main(int argv, const char *argc[]) {
  TextExtractor t;
  t.extract("input.txt", "output.txt");
  return 0;
}
