#pragma once
#include "Character.h"

class Artificer : public Character {
private:
	static const std::map<ABILITIES, int> ARTIFICER_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Artificer();
};