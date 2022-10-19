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

const std::map<ABILITIES, int> Fighter::FIGHTER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};