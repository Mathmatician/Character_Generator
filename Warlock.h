#pragma once
#include "Character.h"

class Warlock : public Character {
private:
	static const std::map<ABILITIES, int> WARLOCK_ABILITY_LEVELS;

public:
	virtual int ABILITY_LEVEL(ABILITIES ability);
	Warlock();
};