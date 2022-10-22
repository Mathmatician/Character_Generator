#include "Monk.h"

Monk::Monk(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::MONK;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &MONK_ABILITY_LEVELS;
	Monk::EquipmentSelection(this);
	SetHitDice(D8, 1);
	SetMaxHitpoints(8);
}

int Monk::ABILITY_LEVEL(ABILITIES ability)
{
	return MONK_ABILITY_LEVELS.at(ability);
}

void Monk::EquipmentSelection(Character* character)
{

}

void Monk::SkillOptions(Character* character, int total_trained_allowed)
{

}

const std::map<ABILITIES, int> Monk::MONK_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};