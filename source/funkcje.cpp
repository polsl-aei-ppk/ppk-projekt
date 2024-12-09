
#include <string>
#include <iostream>
#include <fstream>

#include "funkcje.h"
#include "struktury.h"

void pokoloruj_wierzcholki_grafu(graf & g)
{
    std::size_t liczba_wierzcholkow_do_pokolorowania = g.wierzcholki.size();

    unsigned int kolor = 0;
    while (liczba_wierzcholkow_do_pokolorowania > 0)
    {
        ++kolor;
        for (auto & [nazwa, info] : g.wierzcholki)
        {
            bool mozna_kolorowac = true;
            if (info.kolor == 0) // wierzcholek do pokolorwania
            {
                for (const auto & s : info.sasiedzi)
                {
                    if (g.wierzcholki[s].kolor == kolor)
                        mozna_kolorowac = false;
                }
                if (mozna_kolorowac)
                {
                    info.kolor = kolor;
                    --liczba_wierzcholkow_do_pokolorowania;
                }
            }
        }
    }
}


void wypisz(const graf& g)
{
    for (const auto & wezel : g.wierzcholki)
    {
        std::cout << wezel.first << " (" << wezel.second.kolor << ") ";
        for (const auto & s : wezel.second.sasiedzi)
        {
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
}

graf wczytaj_graf(const std::string& nazwa_pliku_wejsciowego)
{
   graf wczytany;

   std::ifstream plik (nazwa_pliku_wejsciowego);

   std::string lewy, prawy;

   while (plik >> lewy >> prawy)
   {
       wczytany.wierzcholki[lewy].sasiedzi.push_back(prawy);
       wczytany.wierzcholki[prawy].sasiedzi.push_back(lewy);
   }

   return wczytany;
}


std::pair<std::string, std::string> pobierz_wartosc_parametrow(int ile, char * params[])
{
    if (ile == 3)
    {
        std::string wejscie {params[1]};
        std::string wyjscie {params[2]};

        return {wejscie, wyjscie};
    }


    return {};
}

void help(char * params[])
{
    std::cout << "Program do ..." << std::endl;
    std::cout << "uzycie programu:" << std::endl;
    std::cout << params[0] << " nazwa_pliku_wejsciowego nazwa_pliku wyjsciowego" << std::endl;
}
