#pragma once
#include "Character.h"

class Fighter : public Character {
private:
	static const std::map<ABILITIES, int> FIGHTER_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Fighter();
};