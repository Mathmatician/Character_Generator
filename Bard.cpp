#include "Bard.h"

Bard::Bard()
{
	class_ID = BARD;
	abilities_map = &BARD_ABILITY_LEVELS;
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
		character->AddToInventory(CLUB, 1);
		break;
	case 1:
		character->AddToInventory(DAGGER, 1);
		break;
	case 2:
		character->AddToInventory(GREATCLUB, 1);
		break;
	case 3:
		character->AddToInventory(HANDAXE, 1);
		break;
	case 4:
		character->AddToInventory(JAVELIN, 1);
		break;
	case 5:
		character->AddToInventory(LIGHT_HAMMER, 1);
		break;
	case 6:
		character->AddToInventory(LONGSWORD, 1);
		break;
	case 7:
		character->AddToInventory(MACE, 1);
		break;
	case 8:
		character->AddToInventory(QUARTERSTAFF, 1);
		break;
	case 9:
		character->AddToInventory(RAPIER, 1);
		break;
	case 10:
		character->AddToInventory(SICKLE, 1);
		break;
	case 11:
		character->AddToInventory(SPEAR, 1);
		break;
	case 12:
		character->AddToInventory(CROSSBOW_LIGHT, 1);
		break;
	case 13:
		character->AddToInventory(DART, 1);
		break;
	case 14:
		character->AddToInventory(SHORTBOW, 1);
		break;
	case 15:
		character->AddToInventory(SLING, 1);
	}

	selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		break;
		Character::SelectEquipmentPack(character, DIPLOMATS_PACK);
	case 1:
		Character::SelectEquipmentPack(character, ENTERTAINERS_PACK);
		break;
	}

	selection = GenerateRandomNumber(0, 9);
	switch (selection)
	{
	case 0:
		character->AddToInventory(BAGPIPE, 1);
		break;
	case 1:
		character->AddToInventory(DRUM, 1);
		break;
	case 2:
		character->AddToInventory(DULCIMER, 1);
		break;
	case 3:
		character->AddToInventory(FLUTE, 1);
		break;
	case 4:
		character->AddToInventory(LUTE, 1);
		break;
	case 5:
		character->AddToInventory(LYRE, 1);
		break;
	case 6:
		character->AddToInventory(HORN, 1);
		break;
	case 7:
		character->AddToInventory(PAN_FLUTE, 1);
		break;
	case 8:
		character->AddToInventory(SHAWM, 1);
		break;
	case 9:
		character->AddToInventory(VIOL, 1);
		break;
	}

	character->AddToInventory(LEATHER_ARMOR, 1);
	character->AddToInventory(DAGGER, 1);
}