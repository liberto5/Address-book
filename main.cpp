#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt", "Adresaci_tymczasowo.txt");

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.wylogujUzytkownika();
    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
    //ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
    //ksiazkaAdresowa.usunAdresata();
    //ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.usunAdresata();
    //ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.edytujAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    //ksiazkaAdresowa.wylogujUzytkownika();
}
