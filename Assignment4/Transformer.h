// Transformer.h
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Weapon.h"

enum class Direction {
    Left,
    Right,
    Forward,
    Back
};

class Transformer {
public:
    Transformer();
    virtual ~Transformer() = default;

    bool move();
    bool turn(Direction dir);
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();

    unsigned int getLevel() const;
    void setLevel(unsigned int level);

    unsigned int getStrength() const;
    void setStrength(unsigned int strength);

    unsigned int getRange() const;
    void setRange(unsigned int range);

    unsigned int getFuel() const;
    void setFuel(unsigned int fuel);

    unsigned int getAmmo() const;
    void setAmmo(unsigned int ammo);
	
    const Weapon& getWeapon() const; 
    void setWeapon(const Weapon& weapon); 

    const Weapon& getPrimaryWeapon() const;
    void setPrimaryWeapon(const Weapon& weapon);

    const Weapon& getSecondaryWeapon() const;
    void setSecondaryWeapon(const Weapon& weapon);

    bool operator==(const Transformer& other) const;
    bool operator!=(const Transformer& other) const;

private:
    unsigned int _level;
    unsigned int _strength;
    unsigned int _range;
    unsigned int _fuel;
    unsigned int _ammo;

    Weapon* _weapon;  
    Weapon _primaryWeapon;
    Weapon _secondaryWeapon;
};

#endif

