#include "Sorcerer.h"

Sorcerer::Sorcerer()
{
	class_ID = SORCERER;
	abilities_map = &SORCERER_ABILITY_LEVELS;
}

int Sorcerer::ABILITY_LEVEL(ABILITIES ability)
{
	return SORCERER_ABILITY_LEVELS.at(ability);
}

const std::map<ABILITIES, int> Sorcerer::SORCERER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};