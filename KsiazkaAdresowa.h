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

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI) :
        uzytkownikMenedzer(nazwaPlikuZUzytkownikami), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) { };
    ~KsiazkaAdresowa() {
        delete adresatMenedzer;
    }

    bool czyUzytkownikJestZalogowany();
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
    void edytujAdresata();
};

#endif //KSIAZKAADRESOWA_H
