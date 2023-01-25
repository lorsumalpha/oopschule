#include <iostream>
#include "src/classes/Zauberer/Zauberer.h"
#include "src/classes/Krieger/Krieger.h"

using namespace std;

int main() {
    Zauberer Merlin;                    // Instanz einer Klasse, Objekt
    Krieger Mark;
    Mark.angriff();
    Merlin.zaubern();
    Merlin.sterben();
    return 0;
}
