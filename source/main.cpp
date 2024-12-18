
#include <string>
#include <iostream>

#include "funkcje.h"
#include "struktury.h"

int main (int ile, char * params[])
{
    // czy parametry sa poprawne?
    auto [nazwa_pliku_wejsciowego, nazwa_pliku_wyjsciowego] = pobierz_wartosc_parametrow(ile, params);

    // std::pair<std::string,std::string> pobierz_wartosc_parametrow (int ile, char * params[]);

    if (not nazwa_pliku_wejsciowego.empty() and not nazwa_pliku_wyjsciowego.empty())
    {
        // działamy!
        graf konflikty = wczytaj_graf(nazwa_pliku_wejsciowego);
        //   graf wczytaj_graf (const std::string & nazwa_pliku_wejsciowego);

       // wypisz(konflikty);
        // void wypisz (const graf & g);

        pokoloruj_wierzcholki_grafu(konflikty);
        // void pokoloruj_wierzcholki_grafu(graf & g);

        wypisz(konflikty);

        zapisz_kolory (konflikty, nazwa_pliku_wyjsciowego);
        //   void zapisz_kolory (const graf & g, const std::string & nazwa_pliku_wyjsciowego);

    }
    else
    {
        help(params);
    }

    return 0;
}
