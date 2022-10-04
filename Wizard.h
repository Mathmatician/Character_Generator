#pragma once
#include "Character.h"

class Wizard : public Character {
private:
	static const std::map<ABILITIES, int> WIZARD_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Wizard();
};