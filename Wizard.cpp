#include "Wizard.h"

Wizard::Wizard(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::WIZARD;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &WIZARD_ABILITY_LEVELS;
	Wizard::EquipmentSelection(this);
	SetHitDice(D6, 1);
	SetMaxHitpoints(6);
}

int Wizard::ABILITY_LEVEL(ABILITIES ability)
{
	return WIZARD_ABILITY_LEVELS.at(ability);
}

void Wizard::EquipmentSelection(Character* character)
{

}

void Wizard::SkillOptions(Character* character, int total_trained_allowed)
{

}

const std::map<ABILITIES, int> Wizard::WIZARD_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};