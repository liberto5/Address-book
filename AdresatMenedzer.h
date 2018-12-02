#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include <iostream>
#include <algorithm>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"

class AdresatMenedzer
{
    Adresat adresat;
public:
    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlWszystkichAdresatow(vector <Adresat> &adresaci);
    void wyswietlDaneAdresata(Adresat adresat);
};

#endif //ADRESATMENEDZER_H
