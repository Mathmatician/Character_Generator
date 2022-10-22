#include "Druid.h"

Druid::Druid(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::DRUID;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &DRUID_ABILITY_LEVELS;
	Druid::EquipmentSelection(this);
	SetHitDice(D8, 1);
	SetMaxHitpoints(8);
}

int Druid::ABILITY_LEVEL(ABILITIES ability)
{
	return DRUID_ABILITY_LEVELS.at(ability);
}

void Druid::EquipmentSelection(Character* character)
{

}

void Druid::SkillOptions(Character* character, int total_trained_allowed)
{

}

const std::map<ABILITIES, int> Druid::DRUID_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};