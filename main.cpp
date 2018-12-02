#include <iostream>

#include "KsiazkaAdresowa.h"
#include "PlikZAdresatami.h"    // potem to usun i daj funkcje z tym zwiazana gdzies indziej!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.wylogujUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    PlikZAdresatami plikZAdresatami;
    plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(1);
    plikZAdresatami.dodajAdresata();
    plikZAdresatami.wyswietlWszystkichAdresatow();

    return 0;
}
