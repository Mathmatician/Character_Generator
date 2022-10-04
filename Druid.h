#pragma once
#include "Character.h"

class Druid : public Character {
private:
	static const std::map<ABILITIES, int> DRUID_ABILITY_LEVELS;

public:
	static int ABILITY_LEVEL(ABILITIES ability);
	Druid();
};