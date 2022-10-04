#pragma once
#include "Character.h"

class Rogue : public Character {
private:
	static const std::map<ABILITIES, int> ROGUE_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Rogue();
};