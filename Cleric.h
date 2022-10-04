#pragma once
#include "Character.h"

class Cleric : public Character {
private:
	static const std::map<ABILITIES, int> CLERIC_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Cleric();
};