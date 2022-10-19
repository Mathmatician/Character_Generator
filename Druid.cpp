#include "Druid.h"

Druid::Druid()
{
	class_ID = DRUID;
	abilities_map = &DRUID_ABILITY_LEVELS;
}

int Druid::ABILITY_LEVEL(ABILITIES ability)
{
	return DRUID_ABILITY_LEVELS.at(ability);
}

const std::map<ABILITIES, int> Druid::DRUID_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};