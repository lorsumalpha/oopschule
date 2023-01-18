#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

class Enemy {                        // Klasse [class]; Bauplan
private:                                // Standard, kein Zugriff
    int Leben = 10;                     // Eigenschaften, Attribute
    float Zauberkraft = 2;
    float Mana = 50;

    void zaubern();                   // Methodendeklaration


public:                                 // Ab hier Zugriff von außen möglich
    int Kills;
    void heilen();
    void statistik();
};

#endif // ENEMY_H_INCLUDED
