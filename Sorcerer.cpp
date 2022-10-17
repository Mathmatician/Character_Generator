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