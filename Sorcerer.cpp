#include "Sorcerer.h"

Sorcerer::Sorcerer(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::SORCERER;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &SORCERER_ABILITY_LEVELS;
	Sorcerer::EquipmentSelection(this);
	SetHitDice(D6, 1);
	SetMaxHitpoints(6);
}

int Sorcerer::ABILITY_LEVEL(ABILITIES ability)
{
	return SORCERER_ABILITY_LEVELS.at(ability);
}

void Sorcerer::EquipmentSelection(Character* character)
{

}

void Sorcerer::SkillOptions(Character* character, int total_trained_allowed)
{

}

const std::map<ABILITIES, int> Sorcerer::SORCERER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};