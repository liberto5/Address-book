#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include <iostream>
#include <vector>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

class AdresatMenedzer
{
    const int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    int wczytajLiczbeCalkowita();
    char wczytajZnak();
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);

public:
    AdresatMenedzer (string nazwaPlikuZAdresatami, int IDZALOGOWANEGOUZYTKOWNIKA, string nazwaTymczasowegoPlikuZAdresatami) :
        plikZAdresatami(nazwaPlikuZAdresatami, nazwaTymczasowegoPlikuZAdresatami), idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };
    void dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();

};

#endif //ADRESATMENEDZER_H
