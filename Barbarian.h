#pragma once
#include "Character.h"

class Barbarian : public Character {
private:
	static const std::map<ABILITIES, int> BARBARIAN_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Barbarian();
};