#pragma once
#include "Character.h"

class Bard : public Character {
private:
	static const std::map<ABILITIES, int> BARD_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Bard();
};