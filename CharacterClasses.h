#pragma once

#include <random>

#include "Artificer.h"
#include "Barbarian.h"
#include "Bard.h"
#include "Cleric.h"
#include "Druid.h"
#include "Fighter.h"
#include "Monk.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Rogue.h"
#include "Sorcerer.h"
#include "Warlock.h"
#include "Wizard.h"

#include "Ability_Score_Class_Preferences.h"


// Dictionary for level requirments
const std::map<FEATS, int> Character::FEAT_LEVEL_REQUIREMENTS = {
	{FEATS::LINGUIST, 1}
};

const std::map<ABILITIES, int> Artificer::ARTIFICER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Barbarian::BARBARIAN_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Bard::BARD_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Cleric::CLERIC_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Druid::DRUID_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Fighter::FIGHTER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Monk::MONK_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Paladin::PALADIN_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Ranger::RANGER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Rogue::ROGUE_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Sorcerer::SORCERER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Warlock::WARLOCK_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Wizard::WIZARD_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};



void BarbarianSkillOptions(Character* character, int total_trained_allowed)
{
	while (total_trained_allowed > 0)
	{
		int rand_num = GenerateRandomNumber(0, 5); // generate random number between 0 - 5

		switch (rand_num)
		{
		case 0:
			if (!character->isTrainedInSkill(ANIMAL_HANDLING))
			{
				character->MarkSkillTrained(ANIMAL_HANDLING, 1);
				total_trained_allowed--;
			}
			break;
		case 1:
			if (!character->isTrainedInSkill(ATHLETICS))
			{
				character->MarkSkillTrained(ATHLETICS, 1);
				total_trained_allowed--;
			}
			break;
		case 2:
			if (!character->isTrainedInSkill(INTIMIDATION))
			{
				character->MarkSkillTrained(INTIMIDATION, 1);
				total_trained_allowed--;
			}
			break;
		case 3:
			if (!character->isTrainedInSkill(NATURE))
			{
				character->MarkSkillTrained(NATURE, 1);
				total_trained_allowed--;
			}
			break;
		case 4:
			if (!character->isTrainedInSkill(PERCEPTION))
			{
				character->MarkSkillTrained(PERCEPTION, 1);
				total_trained_allowed--;
			}
			break;
		case 5:
			if (!character->isTrainedInSkill(SURVIVAL))
			{
				character->MarkSkillTrained(SURVIVAL, 1);
				total_trained_allowed--;
			}
			break;
		}
	}
}
