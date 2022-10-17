#include "Warlock.h"

Warlock::Warlock()
{
	class_ID = WARLOCK;
	abilities_map = &WARLOCK_ABILITY_LEVELS;
}

int Warlock::ABILITY_LEVEL(ABILITIES ability)
{
	return WARLOCK_ABILITY_LEVELS.at(ability);
}