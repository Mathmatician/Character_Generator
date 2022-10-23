#include "Ranger.h"

Ranger::Ranger(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::RANGER;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &RANGER_ABILITY_LEVELS;
	Ranger::EquipmentSelection(this);
	SetHitDice(D10, 1);
	SetMaxHitpoints(10);
}

int Ranger::ABILITY_LEVEL(ABILITIES ability)
{
	return RANGER_ABILITY_LEVELS.at(ability);
}

void Ranger::EquipmentSelection(Character* character)
{

}

void Ranger::SkillOptions(Character* character, int total_trained_allowed)
{

}

void Ranger::EquipItems(Character* character)
{

}

const std::map<ABILITIES, int> Ranger::RANGER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};