#include <iostream>
#include "src/classes/Zauberer/Zauberer.h"
#include "src/classes/Krieger/Krieger.h"

// Komposition: "Muss" Beziehung - etwas das zur Funktionalität  benötigt wird
// Aggregation: "Weiche" Beziehung - kann ausgetauscht werden oder in anderen Objekten wiederverwendet werden

using namespace std;

class Spieler{
    string Name;
};

class Menschaergerdichnicht{
    Spieler spielFigur[3];
};

class Netzteil{
    int Leistung;
};

class CPU {
    int Taktrate;
};

class PC {
    string Hersteller;
    string Modell;
    float Stromverbrauch;
    CPU Intel;
    Netzteil beQuiet;
};

int main() {

}
