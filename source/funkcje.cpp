
#include <string>
#include <iostream>

#include "funkcje.h"

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

void help()
{
    std::cout << "Program do ..." << std::endl;
    std::cout << "uzycie programu:" << std::endl;
    std::cout << "nazwa_programu nazwa_pliku_wejsciowego nazwa_pliku wyjsciowego" << std::endl;
}
