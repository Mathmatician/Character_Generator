#include "Bard.h"

Bard::Bard(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::BARD;
	SelectRace(race_id);
	SetBackground(background_id);
	AddLanguage(LANGUAGES::COMMON_LANGUAGE);
	abilities_map = &BARD_ABILITY_LEVELS;

	SetHitDice(D8, 1);
	SetMaxHitpoints(8);
	SetCurrentHitpoints(8);

	MarkArmorProficient(ITEMS::LIGHT_ARMOR);

	MarkWeaponProficient(ITEMS::SIMPLE_WEAPONS);
	MarkWeaponProficient(ITEMS::CROSSBOW_HAND);
	MarkWeaponProficient(ITEMS::LONGSWORD);
	MarkWeaponProficient(ITEMS::RAPIER);
	MarkWeaponProficient(ITEMS::SHORTSWORD);

	Bard::InstrumentProficiencySelection(this);

	Bard::EquipmentSelection(this);
}

int Bard::ABILITY_LEVEL(ABILITIES ability)
{
	return BARD_ABILITY_LEVELS.at(ability);
}

void Bard::EquipmentSelection(Character* character)
{
	int selection = GenerateRandomNumber(0, 15);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::CLUB, 1);
		break;
	case 1:
		character->AddToInventory(ITEMS::DAGGER, 1);
		break;
	case 2:
		character->AddToInventory(ITEMS::GREATCLUB, 1);
		break;
	case 3:
		character->AddToInventory(ITEMS::HANDAXE, 1);
		break;
	case 4:
		character->AddToInventory(ITEMS::JAVELIN, 1);
		break;
	case 5:
		character->AddToInventory(ITEMS::LIGHT_HAMMER, 1);
		break;
	case 6:
		character->AddToInventory(ITEMS::LONGSWORD, 1);
		break;
	case 7:
		character->AddToInventory(ITEMS::MACE, 1);
		break;
	case 8:
		character->AddToInventory(ITEMS::QUARTERSTAFF, 1);
		break;
	case 9:
		character->AddToInventory(ITEMS::RAPIER, 1);
		break;
	case 10:
		character->AddToInventory(ITEMS::SICKLE, 1);
		break;
	case 11:
		character->AddToInventory(ITEMS::SPEAR, 1);
		break;
	case 12:
		character->AddToInventory(ITEMS::CROSSBOW_LIGHT, 1);
		break;
	case 13:
		character->AddToInventory(ITEMS::DART, 1);
		break;
	case 14:
		character->AddToInventory(ITEMS::SHORTBOW, 1);
		break;
	case 15:
		character->AddToInventory(ITEMS::SLING, 1);
	}

	selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		break;
		Character::SelectEquipmentPack(character, EQUIPMENT_PACKS::DIPLOMATS_PACK);
	case 1:
		Character::SelectEquipmentPack(character, EQUIPMENT_PACKS::ENTERTAINERS_PACK);
		break;
	}

	selection = GenerateRandomNumber(0, 9);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::BAGPIPE, 1);
		break;
	case 1:
		character->AddToInventory(ITEMS::DRUM, 1);
		break;
	case 2:
		character->AddToInventory(ITEMS::DULCIMER, 1);
		break;
	case 3:
		character->AddToInventory(ITEMS::FLUTE, 1);
		break;
	case 4:
		character->AddToInventory(ITEMS::LUTE, 1);
		break;
	case 5:
		character->AddToInventory(ITEMS::LYRE, 1);
		break;
	case 6:
		character->AddToInventory(ITEMS::HORN, 1);
		break;
	case 7:
		character->AddToInventory(ITEMS::PAN_FLUTE, 1);
		break;
	case 8:
		character->AddToInventory(ITEMS::SHAWM, 1);
		break;
	case 9:
		character->AddToInventory(ITEMS::VIOL, 1);
		break;
	}

	character->AddToInventory(ITEMS::LEATHER_ARMOR, 1);
	character->AddToInventory(ITEMS::DAGGER, 1);
}

void Bard::SkillOptions(Character* character, int total_trained_allowed)
{
	while (total_trained_allowed > 0)
	{
		SKILLS selection = (SKILLS)GenerateRandomNumber(0, (int)SKILLS::NUM_OF_SKILLS - 1);
		if (!character->isProficientInSkill(selection))
		{
			character->MarkSkillTrained(selection);
			total_trained_allowed--;
		}
	}
}

void Bard::InstrumentProficiencySelection(Character* character)
{
	int total_trained_allowed = 3;

	while (total_trained_allowed > 0)
	{
		int selection = GenerateRandomNumber(0, 9);
		switch (selection)
		{
		case 0:
			if (!character->isProficientWithTools(ITEMS::BAGPIPE))
			{
				character->MarkToolsProficient(ITEMS::BAGPIPE);
				total_trained_allowed--;
			}
			break;
		case 1:
			if (!character->isProficientWithTools(ITEMS::DRUM))
			{
				character->MarkToolsProficient(ITEMS::DRUM);
				total_trained_allowed--;
			}
			break;
		case 2:
			if (!character->isProficientWithTools(ITEMS::DULCIMER))
			{
				character->MarkToolsProficient(ITEMS::DULCIMER);
				total_trained_allowed--;
			}
			break;
		case 3:
			if (!character->isProficientWithTools(ITEMS::FLUTE))
			{
				character->MarkToolsProficient(ITEMS::FLUTE);
				total_trained_allowed--;
			}
			break;
		case 4:
			if (!character->isProficientWithTools(ITEMS::LUTE))
			{
				character->MarkToolsProficient(ITEMS::LUTE);
				total_trained_allowed--;
			}
			break;
		case 5:
			if (!character->isProficientWithTools(ITEMS::LYRE))
			{
				character->MarkToolsProficient(ITEMS::LYRE);
				total_trained_allowed--;
			}
			break;
		case 6:
			if (!character->isProficientWithTools(ITEMS::HORN))
			{
				character->MarkToolsProficient(ITEMS::HORN);
				total_trained_allowed--;
			}
			break;
		case 7:
			if (!character->isProficientWithTools(ITEMS::PAN_FLUTE))
			{
				character->MarkToolsProficient(ITEMS::PAN_FLUTE);
				total_trained_allowed--;
			}
			break;
		case 8:
			if (!character->isProficientWithTools(ITEMS::SHAWM))
			{
				character->MarkToolsProficient(ITEMS::SHAWM);
				total_trained_allowed--;
			}
			break;
		case 9:
			if (!character->isProficientWithTools(ITEMS::VIOL))
			{
				character->MarkToolsProficient(ITEMS::VIOL);
				total_trained_allowed--;
			}
			break;
		}
	}
}

void Bard::EquipItems(Character* character)
{

}

const std::map<ABILITIES, int> Bard::BARD_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};