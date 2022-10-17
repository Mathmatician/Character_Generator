#include "Ranger.h"

Ranger::Ranger()
{
	class_ID = RANGER;
	abilities_map = &RANGER_ABILITY_LEVELS;
}

int Ranger::ABILITY_LEVEL(ABILITIES ability)
{
	return RANGER_ABILITY_LEVELS.at(ability);
}