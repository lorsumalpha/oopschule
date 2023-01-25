//
// Created by adm_schule on 25.01.2023.
//

#ifndef OOPSCHULE_SPIELFIGUR_H
#define OOPSCHULE_SPIELFIGUR_H
#include <iostream>


class Spielfigur {
protected:  // ==
    int leben;
public:
    void sterben(){
        std::cout << "death";
    }
};


#endif //OOPSCHULE_SPIELFIGUR_H
