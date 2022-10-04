#pragma once
#include "Character.h"

class Ranger : public Character {
private:
	static const std::map<ABILITIES, int> RANGER_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Ranger();
};