#include "Rogue.h"

Rogue::Rogue(RACES race_id, BACKGROUNDS background_id)
{
	class_ID = CLASSES::ROGUE;
	SelectRace(race_id);
	SetBackground(background_id);
	abilities_map = &ROGUE_ABILITY_LEVELS;
	Rogue::EquipmentSelection(this);
	SetHitDice(D8, 1);
	SetMaxHitpoints(8);
}

int Rogue::ABILITY_LEVEL(ABILITIES ability)
{
	return ROGUE_ABILITY_LEVELS.at(ability);
}

void Rogue::EquipmentSelection(Character* character)
{
	// Rapier or Shortsword
	int selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::RAPIER, 1);
		break;
	case 1:
		character->AddToInventory(ITEMS::SHORTSWORD, 1);
		break;
	}


	selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::SHORTBOW, 1);
		character->AddToInventory(ITEMS::QUIVER, 1);
		character->AddToInventory(ITEMS::ARROW, 20);
		break;
	case 1:
		character->AddToInventory(ITEMS::SHORTSWORD, 1);
		break;
	}


	selection = GenerateRandomNumber(0, 2);
	switch (selection)
	{
	case 0: // BURGLER'S PACK
		Character::SelectEquipmentPack(character, EQUIPMENT_PACKS::BURGLERS_PACK);
		break;
	case 1: // DUNGEONEER'S PACK
		Character::SelectEquipmentPack(character, EQUIPMENT_PACKS::DUNGEONEERS_PACK);
		break;
	case 2: // EXPLORER'S PACK
		Character::SelectEquipmentPack(character, EQUIPMENT_PACKS::EXPLORERS_PACK);
		break;
	}

	character->AddToInventory(ITEMS::LEATHER_ARMOR, 1);
	character->AddToInventory(ITEMS::DAGGER, 2);
	character->AddToInventory(ITEMS::THIEVES_TOOLS, 1);
}

void Rogue::SkillOptions(Character* character, int total_trained_allowed)
{

}

void Rogue::EquipItems(Character* character)
{

}

const std::map<ABILITIES, int> Rogue::ROGUE_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};