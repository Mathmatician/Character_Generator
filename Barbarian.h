#pragma once
#include "Character.h"

class Barbarian : public Character {
private:
	static const std::map<ABILITIES, int> BARBARIAN_ABILITY_LEVELS;

public:
	Barbarian();
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
};