#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  
    for (Human& person : people) {
        person.birthday();
    }

    size_t size = people.size();
    std::vector< char > odpowiedz(size);

    size_t i = 0;
 
    for (auto it = people.rbegin(); it != people.rend(); ++it) {

        bool lubi_jedno = !it->isMonster();

        if (lubi_jedno) {
            odpowiedz[i] = 'y';
        }
        else {
            odpowiedz[i] = 'n';
        }

        i++;
    }

    return odpowiedz;
}