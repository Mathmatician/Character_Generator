#include "Rogue.h"

Rogue::Rogue()
{
	class_ID = ROGUE;
	abilities_map = &ROGUE_ABILITY_LEVELS;
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
		character->AddToInventory(RAPIER, 1);
		break;
	case 1:
		character->AddToInventory(SHORTSWORD, 1);
		break;
	}


	selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		character->AddToInventory(SHORTBOW, 1);
		character->AddToInventory(QUIVER, 1);
		character->AddToInventory(ARROW, 20);
		break;
	case 1:
		character->AddToInventory(SHORTSWORD, 1);
		break;
	}


	selection = GenerateRandomNumber(0, 2);
	switch (selection)
	{
	case 0: // BURGLER'S PACK
		Character::SelectEquipmentPack(character, BURGLERS_PACK);
		break;
	case 1: // DUNGEONEER'S PACK
		Character::SelectEquipmentPack(character, DUNGEONEERS_PACK);
		break;
	case 2: // EXPLORER'S PACK
		Character::SelectEquipmentPack(character, EXPLORERS_PACK);
		break;
	}

	character->AddToInventory(LEATHER_ARMOR, 1);
	character->AddToInventory(DAGGER, 2);
	character->AddToInventory(THIEVES_TOOLS, 1);
}

const std::map<ABILITIES, int> Rogue::ROGUE_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};