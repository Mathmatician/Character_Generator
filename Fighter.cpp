#include "Fighter.h"

Fighter::Fighter()
{
	class_ID = FIGHTER;
	abilities_map = &FIGHTER_ABILITY_LEVELS;
}

int Fighter::ABILITY_LEVEL(ABILITIES ability)
{
	return FIGHTER_ABILITY_LEVELS.at(ability);
}