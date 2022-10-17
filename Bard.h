#pragma once
#include "Character.h"

class Bard : public Character {
private:
	static const std::map<ABILITIES, int> BARD_ABILITY_LEVELS;

public:
	Bard();
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
};