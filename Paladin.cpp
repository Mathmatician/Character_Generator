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