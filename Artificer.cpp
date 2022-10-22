#include "Artificer.h"
#include <iostream>

Artificer::Artificer(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::ARTIFICER;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &ARTIFICER_ABILITY_LEVELS;
	Artificer::EquipmentSelection(this);
	SetHitDice(D12, 1);
	SetMaxHitpoints(8);
}

int Artificer::ABILITY_LEVEL(ABILITIES ability)
{
	return ARTIFICER_ABILITY_LEVELS.at(ability);
}

void Artificer::EquipmentSelection(Character* character)
{

}

void Artificer::SkillOptions(Character* character, int total_trained_allowed)
{

}


const std::map<ABILITIES, int> Artificer::ARTIFICER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};