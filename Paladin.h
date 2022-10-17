#pragma once
#include "Character.h"

class Paladin : public Character {
private:
	static const std::map<ABILITIES, int> PALADIN_ABILITY_LEVELS;

public:
	virtual int ABILITY_LEVEL(ABILITIES ability);
	Paladin();
};