#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string nazwaPlikuZAdresatami;
    string nazwaTymczasowegoPlikuZAdresatami;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI, string NAZWATYMCZASOWEGOPLIKUZADRESATAMI) :
        uzytkownikMenedzer(nazwaPlikuZUzytkownikami), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI), nazwaTymczasowegoPlikuZAdresatami(NAZWATYMCZASOWEGOPLIKUZADRESATAMI) {};
    ~KsiazkaAdresowa() {
        delete adresatMenedzer;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();

    void dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
};

#endif //KSIAZKAADRESOWA_H
