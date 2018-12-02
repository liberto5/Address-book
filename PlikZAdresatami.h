#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "AdresatMenedzer.h"

class PlikZAdresatami
{
    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
public:
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    void wyswietlWszystkichAdresatow();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    static void dopiszAdresataDoPliku(Adresat adresat);
    static string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    static bool czyPlikJestPusty(fstream &plikTekstowy);
};

#endif //PLIKZADRESATAMI_H
