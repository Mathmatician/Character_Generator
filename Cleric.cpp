#include "Cleric.h"

Cleric::Cleric(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::CLERIC;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &CLERIC_ABILITY_LEVELS;

	SetHitDice(D8, 1);
	SetMaxHitpoints(8);
	SetCurrentHitpoints(8);

	MarkArmorProficient(ITEMS::LIGHT_ARMOR);
	MarkArmorProficient(ITEMS::MEDIUM_ARMOR);
	MarkArmorProficient(ITEMS::SHIELD);

	MarkWeaponProficient(ITEMS::SIMPLE_WEAPONS);

	MarkSavingThrow(ABILITY_SCORES::WISDOM);
	MarkSavingThrow(ABILITY_SCORES::CHARISMA);

	Cleric::EquipmentSelection(this);
}

int Cleric::ABILITY_LEVEL(ABILITIES ability)
{
	return CLERIC_ABILITY_LEVELS.at(ability);
}

void Cleric::EquipmentSelection(Character* character)
{
	int selection = GenerateRandomNumber(0, 1);
	bool item_selected = false;
	while (!item_selected)
	{
		switch (selection)
		{
		case 0:
			character->AddToInventory(ITEMS::MACE, 1);
			item_selected = true;
			break;
		case 1:
			if (isDwarf(character))
			{
				character->AddToInventory(ITEMS::WARHAMMER, 1);
				item_selected = true;
			}
			break;
		}
	}

	selection = GenerateRandomNumber(0, 2);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::MEDIUM_ARMOR_SCALE_MAIL, 1);
		break;
	case 1:
		character->AddToInventory(ITEMS::LIGHT_ARMOR_LEATHER, 1);
		break;
	case 2:
		character->AddToInventory(ITEMS::HEAVY_ARMOR_CHAIN_MAIL, 1);
		break;
	}

	selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::CROSSBOW_LIGHT, 1);
		character->AddToInventory(ITEMS::CROSSBOW_BOLT, 20);
		break;
	case 1:
		character->AddToInventory(ITEMS::LIGHT_ARMOR_LEATHER, 1);
		break;
	case 2:
		character->AddToInventory(ITEMS::HEAVY_ARMOR_CHAIN_MAIL, 1);
		break;
	}
}

void Cleric::SkillOptions(Character* character, int total_trained_allowed)
{
	while (total_trained_allowed > 0)
	{
		int rand_num = GenerateRandomNumber(0, 4); // generate random number between 0 - 5

		switch (rand_num)
		{
		case 0:
			if (!character->isProficientInSkill(SKILLS::HISTORY))
			{
				character->MarkSkillTrained(SKILLS::HISTORY);
				total_trained_allowed--;
			}
			break;
		case 1:
			if (!character->isProficientInSkill(SKILLS::INSIGHT))
			{
				character->MarkSkillTrained(SKILLS::INSIGHT);
				total_trained_allowed--;
			}
			break;
		case 2:
			if (!character->isProficientInSkill(SKILLS::MEDICINE))
			{
				character->MarkSkillTrained(SKILLS::MEDICINE);
				total_trained_allowed--;
			}
			break;
		case 3:
			if (!character->isProficientInSkill(SKILLS::PERSUASION))
			{
				character->MarkSkillTrained(SKILLS::PERSUASION);
				total_trained_allowed--;
			}
			break;
		case 4:
			if (!character->isProficientInSkill(SKILLS::RELIGION))
			{
				character->MarkSkillTrained(SKILLS::RELIGION);
				total_trained_allowed--;
			}
			break;
		}
	}
}

void Cleric::EquipItems(Character* character)
{

}

const std::map<ABILITIES, int> Cleric::CLERIC_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};