#include "Artificer.h"
#include <iostream>

Artificer::Artificer()
{
	class_ID = ARTIFICER;
	abilities_map = &ARTIFICER_ABILITY_LEVELS;
}

int Artificer::ABILITY_LEVEL(ABILITIES ability)
{
	return ARTIFICER_ABILITY_LEVELS.at(ability);
}

void Artificer::EquipmentSelection(Character* character)
{

}


const std::map<ABILITIES, int> Artificer::ARTIFICER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};