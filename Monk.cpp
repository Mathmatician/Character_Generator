#include "Monk.h"

Monk::Monk()
{
	class_ID = MONK;
	abilities_map = &MONK_ABILITY_LEVELS;
}

int Monk::ABILITY_LEVEL(ABILITIES ability)
{
	return MONK_ABILITY_LEVELS.at(ability);
}

const std::map<ABILITIES, int> Monk::MONK_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};