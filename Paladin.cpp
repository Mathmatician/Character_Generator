#include "Paladin.h"

Paladin::Paladin(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::PALADIN;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &PALADIN_ABILITY_LEVELS;
	Paladin::EquipmentSelection(this);
	SetHitDice(D10, 1);
	SetMaxHitpoints(10);
}

int Paladin::ABILITY_LEVEL(ABILITIES ability)
{
	return PALADIN_ABILITY_LEVELS.at(ability);
}

void Paladin::EquipmentSelection(Character* character)
{

}

void Paladin::SkillOptions(Character* character, int total_trained_allowed)
{

}

const std::map<ABILITIES, int> Paladin::PALADIN_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};