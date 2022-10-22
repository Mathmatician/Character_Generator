#include "Barbarian.h"

Barbarian::Barbarian(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::BARBARIAN;
	SelectRace(race_id);
	SetBackground(background_id);
	AddLanguage(LANGUAGES::COMMON_LANGUAGE);
	abilities_map = &BARBARIAN_ABILITY_LEVELS;

	SetHitDice(D12, 1);
	SetMaxHitpoints(12);
	SetCurrentHitpoints(12);

	MarkArmorProficient(ITEMS::LIGHT_ARMOR);
	MarkArmorProficient(ITEMS::MEDIUM_ARMOR);
	MarkArmorProficient(ITEMS::SHIELD);

	MarkSavingThrow(ABILITY_SCORES::STRENGTH);
	MarkSavingThrow(ABILITY_SCORES::CONSTITUTION);

	Barbarian::EquipmentSelection(this);
}

int Barbarian::ABILITY_LEVEL(ABILITIES ability)
{
	return BARBARIAN_ABILITY_LEVELS.at(ability);
}

void Barbarian::EquipmentSelection(Character* character)
{
	int selection = GenerateRandomNumber(0, 17);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::BATTLEAXE, 1);
		break;
	case 1:
		character->AddToInventory(ITEMS::FLAIL, 1);
		break;
	case 2:
		character->AddToInventory(ITEMS::GLAIVE, 1);
		break;
	case 3:
		character->AddToInventory(ITEMS::GREATAXE, 1);
		break;
	case 4:
		character->AddToInventory(ITEMS::GREATSWORD, 1);
		break;
	case 5:
		character->AddToInventory(ITEMS::HALBERD, 1);
		break;
	case 6:
		character->AddToInventory(ITEMS::LANCE, 1);
		break;
	case 7:
		character->AddToInventory(ITEMS::LONGSWORD, 1);
		break;
	case 8:
		character->AddToInventory(ITEMS::MAUL, 1);
		break;
	case 9:
		character->AddToInventory(ITEMS::MORNINGSTAR, 1);
		break;
	case 10:
		character->AddToInventory(ITEMS::PIKE, 1);
		break;
	case 11:
		character->AddToInventory(ITEMS::RAPIER, 1);
		break;
	case 12:
		character->AddToInventory(ITEMS::SCIMITAR, 1);
		break;
	case 13:
		character->AddToInventory(ITEMS::SHORTSWORD, 1);
		break;
	case 14:
		character->AddToInventory(ITEMS::TRIDENT, 1);
		break;
	case 15:
		character->AddToInventory(ITEMS::WAR_PICK, 1);
		break;
	case 16:
		character->AddToInventory(ITEMS::WARHAMMER, 1);
		break;
	case 17:
		character->AddToInventory(ITEMS::WHIP, 1);
		break;
	}


	selection = GenerateRandomNumber(0, 11);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::CLUB, 1);
		break;
	case 1:
		character->AddToInventory(ITEMS::DAGGER, 1);
		break;
	case 2:
		character->AddToInventory(ITEMS::GREATAXE, 1);
		break;
	case 3:
		character->AddToInventory(ITEMS::GREATCLUB, 1);
		break;
	case 4:
		character->AddToInventory(ITEMS::HALBERD, 1);
		break;
	case 5:
		character->AddToInventory(ITEMS::HANDAXE, 1);
		break;
	case 6:
		character->AddToInventory(ITEMS::JAVELIN, 1);
		break;
	case 7:
		character->AddToInventory(ITEMS::LIGHT_HAMMER, 1);
		break;
	case 8:
		character->AddToInventory(ITEMS::MACE, 1);
		break;
	case 9:
		character->AddToInventory(ITEMS::QUARTERSTAFF, 1);
		break;
	case 10:
		character->AddToInventory(ITEMS::SICKLE, 1);
		break;
	case 11:
		character->AddToInventory(ITEMS::SPEAR, 1);
		break;
	}

	Character::SelectEquipmentPack(character, EQUIPMENT_PACKS::EXPLORERS_PACK);
	character->AddToInventory(ITEMS::JAVELIN, 4);
}

void Barbarian::SkillOptions(Character* character, int total_trained_allowed)
{
	while (total_trained_allowed > 0)
	{
		int rand_num = GenerateRandomNumber(0, 5); // generate random number between 0 - 5

		switch (rand_num)
		{
		case 0:
			if (!character->isProficientInSkill(SKILLS::ANIMAL_HANDLING))
			{
				character->MarkSkillTrained(SKILLS::ANIMAL_HANDLING);
				total_trained_allowed--;
			}
			break;
		case 1:
			if (!character->isProficientInSkill(SKILLS::ATHLETICS))
			{
				character->MarkSkillTrained(SKILLS::ATHLETICS);
				total_trained_allowed--;
			}
			break;
		case 2:
			if (!character->isProficientInSkill(SKILLS::INTIMIDATION))
			{
				character->MarkSkillTrained(SKILLS::INTIMIDATION);
				total_trained_allowed--;
			}
			break;
		case 3:
			if (!character->isProficientInSkill(SKILLS::NATURE))
			{
				character->MarkSkillTrained(SKILLS::NATURE);
				total_trained_allowed--;
			}
			break;
		case 4:
			if (!character->isProficientInSkill(SKILLS::PERCEPTION))
			{
				character->MarkSkillTrained(SKILLS::PERCEPTION);
				total_trained_allowed--;
			}
			break;
		case 5:
			if (!character->isProficientInSkill(SKILLS::SURVIVAL))
			{
				character->MarkSkillTrained(SKILLS::SURVIVAL);
				total_trained_allowed--;
			}
			break;
		}
	}
}

const std::map<ABILITIES, int> Barbarian::BARBARIAN_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};