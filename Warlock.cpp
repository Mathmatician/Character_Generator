#include "Warlock.h"

Warlock::Warlock(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::WARLOCK;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &WARLOCK_ABILITY_LEVELS;
	Warlock::EquipmentSelection(this);
	SetHitDice(D8, 1);
	SetMaxHitpoints(8);
}

int Warlock::ABILITY_LEVEL(ABILITIES ability)
{
	return WARLOCK_ABILITY_LEVELS.at(ability);
}

void Warlock::EquipmentSelection(Character* character)
{

}

void Warlock::SkillOptions(Character* character, int total_trained_allowed)
{

}

void Warlock::EquipItems(Character* character)
{

}

const std::map<ABILITIES, int> Warlock::WARLOCK_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};