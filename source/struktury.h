#ifndef STRUKTURY_H
#define STRUKTURY_H

#include <map>
#include <string>
#include <vector>

struct graf
{
    struct wierzcholki
    {
        unsigned int kolor;
        std::vector<std::string> sasiedzi;
    };

    std::map<std::string,wierzcholki> wezly;
};

#endif
