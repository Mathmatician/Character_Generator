#include "Fighter.h"

Fighter::Fighter(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::FIGHTER;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &FIGHTER_ABILITY_LEVELS;
	Fighter::EquipmentSelection(this);
	SetHitDice(D10, 1);
	SetMaxHitpoints(10);
}

int Fighter::ABILITY_LEVEL(ABILITIES ability)
{
	return FIGHTER_ABILITY_LEVELS.at(ability);
}

void Fighter::EquipmentSelection(Character* character)
{

}

void Fighter::SkillOptions(Character* character, int total_trained_allowed)
{

}

void Fighter::EquipItems(Character* character)
{

}

const std::map<ABILITIES, int> Fighter::FIGHTER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};