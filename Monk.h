#pragma once
#include "Character.h"

class Monk : public Character {
private:
	static const std::map<ABILITIES, int> MONK_ABILITY_LEVELS;

public:
	virtual int ABILITY_LEVEL(ABILITIES ability);
	Monk();
};