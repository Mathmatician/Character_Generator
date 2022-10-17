#pragma once
#include "Character.h"

class Sorcerer : public Character {
private:
	static const std::map<ABILITIES, int> SORCERER_ABILITY_LEVELS;

public:
	virtual int ABILITY_LEVEL(ABILITIES ability);
	Sorcerer();
};