#include "Wizard.h"

Wizard::Wizard()
{
	class_ID = WIZARD;
	abilities_map = &WIZARD_ABILITY_LEVELS;
}

int Wizard::ABILITY_LEVEL(ABILITIES ability)
{
	return WIZARD_ABILITY_LEVELS.at(ability);
}

const std::map<ABILITIES, int> Wizard::WIZARD_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};