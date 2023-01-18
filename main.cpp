#include <iostream>

using namespace std;

class Zauberer {                        // Klasse [class]; Bauplan
private:                                // Standard, kein Zugriff
    int Leben = 20;                     // Eigenschaften, Attribute
    float Zauberkraft = 1;
    float Mana = 100;

    void zaubern(){                     // OOP: Methode; Prozeduale Programmierung: Funktion
        cout << "Hokus Pokus" << endl;
    }

public:                                 // Ab hier Zugriff von außen möglich
    int Kills;

    void heilen(){
        cout << endl;
        Leben = (Leben + 5)*Zauberkraft;
        Mana = Mana - (Zauberkraft*(Leben/5));
        cout << "Heilung durchgefuehrt!" << endl;
        cout << "Leben nun: " << Leben << endl;
    }

    void statistik(){
        cout << endl;
        cout << "Leben: " << Leben << endl;
        cout << "Mana: " << Mana << endl;
        cout << "Zauberkraft: " << Zauberkraft << endl;
    }
};

int main() {
    Zauberer Merlin;                    // Instanz einer Klasse, Objekt

    Merlin.Kills = 20;                  // Zuweisung eines Wertes für eine Eigenschaft
    cout << "aktuelle Killanzahl: " << Merlin.Kills << endl;               // Ausgabe des aktuellen Wertes
    //Merlin.zaubern();
    Merlin.statistik();
    Merlin.heilen();                    // Aufruf einer Methode
    Merlin.statistik();
    Merlin.heilen();
    Merlin.heilen();
    Merlin.statistik();
    return 0;
}
