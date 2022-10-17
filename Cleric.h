#pragma once
#include "Character.h"

class Cleric : public Character {
private:
	static const std::map<ABILITIES, int> CLERIC_ABILITY_LEVELS;

public:
	Cleric();
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
};