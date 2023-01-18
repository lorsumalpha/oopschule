#ifndef ZAUBERER_H_INCLUDED
#define ZAUBERER_H_INCLUDED

class Zauberer {                        // Klasse [class]; Bauplan
private:                                // Standard, kein Zugriff
    int Leben;                     // Eigenschaften, Attribute
    float Zauberkraft;
    float Mana;


public:                                 // Ab hier Zugriff von außen möglich
    void zaubern(); // Methodendeklaration
};

#endif // ZAUBERER_H_INCLUDED
