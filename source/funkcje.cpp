
#include <string>
#include <iostream>

#include "funkcje.h"
#include "struktury.h"


graf wczytaj_graf(const std::string& nazwa_pliku_wejsciowego)
{
   graf wczytany;


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
