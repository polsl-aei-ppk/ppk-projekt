
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

        // pokoloruj_wierzcholki_grafu(konflikty);
        // zapisz_kolory (nazwa_pliku_wyjsciowego);
    }
    else
    {
        help(params);
    }

    return 0;
}
