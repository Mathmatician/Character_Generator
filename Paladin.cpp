#include "Paladin.h"

Paladin::Paladin()
{
	class_ID = PALADIN;
	abilities_map = &PALADIN_ABILITY_LEVELS;
}

int Paladin::ABILITY_LEVEL(ABILITIES ability)
{
	return PALADIN_ABILITY_LEVELS.at(ability);
}

const std::map<ABILITIES, int> Paladin::PALADIN_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};