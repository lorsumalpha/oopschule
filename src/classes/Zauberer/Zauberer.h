#ifndef ZAUBERER_H_INCLUDED
#define ZAUBERER_H_INCLUDED
#include "src/classes/Spielfigur/Spielfigur.h"

class Zauberer :public Spielfigur{                        // Klasse [class]; Bauplan | :public CLASS (Vererbung)
// Standard, kein Zugriff
private:
    // Eigenschaften, Attribute
    float Zauberkraft;

// Ab hier Zugriff von au�en m�glich
public:
    void zaubern(); // Methodendeklaration
    void sterben(){
        leben = 0;
    }
};

#endif // ZAUBERER_H_INCLUDED
