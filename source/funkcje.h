#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <string>

#include "struktury.h"

void zapisz_kolory (const graf & g, const std::string & nazwa_pliku_wyjsciowego);

void pokoloruj_wierzcholki_grafu(graf & g);

void wypisz (const graf & g);

std::pair<std::string,std::string> pobierz_wartosc_parametrow (int ile, char * params[]);

void help(char * params[]);

graf wczytaj_graf (const std::string & nazwa_pliku_wejsciowego);

#endif
