#ifndef KRIEGER_H_INCLUDED
#define KRIEGER_H_INCLUDED

#include "src/classes/Spielfigur/Spielfigur.h"

class Krieger : public Spielfigur{                        // Klasse [class]; Bauplan
private:                                // Standard, kein Zugriff
    float staerke;
public:                                 // Ab hier Zugriff von au�en m�glich
    void angriff();
};

#endif // KRIEGER_H_INCLUDED
