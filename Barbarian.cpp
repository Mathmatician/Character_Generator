#include "Barbarian.h"

Barbarian::Barbarian()
{
	class_ID = BARBARIAN;
	abilities_map = &BARBARIAN_ABILITY_LEVELS;
}

int Barbarian::ABILITY_LEVEL(ABILITIES ability)
{
	return BARBARIAN_ABILITY_LEVELS.at(ability);
}

void EquipmentSelection(Character* character)
{
	int selection = GenerateRandomNumber(0, 17);
	switch (selection)
	{
	case 0:
		character->AddToInventory(BATTLEAXE, 1);
		break;
	case 1:
		character->AddToInventory(FLAIL, 1);
		break;
	case 2:
		character->AddToInventory(GLAIVE, 1);
		break;
	case 3:
		character->AddToInventory(GREATAXE, 1);
		break;
	case 4:
		character->AddToInventory(GREATSWORD, 1);
		break;
	case 5:
		character->AddToInventory(HALBERD, 1);
		break;
	case 6:
		character->AddToInventory(LANCE, 1);
		break;
	case 7:
		character->AddToInventory(LONGSWORD, 1);
		break;
	case 8:
		character->AddToInventory(MAUL, 1);
		break;
	case 9:
		character->AddToInventory(MORNINGSTAR, 1);
		break;
	case 10:
		character->AddToInventory(PIKE, 1);
		break;
	case 11:
		character->AddToInventory(RAPIER, 1);
		break;
	case 12:
		character->AddToInventory(SCIMITAR, 1);
		break;
	case 13:
		character->AddToInventory(SHORTSWORD, 1);
		break;
	case 14:
		character->AddToInventory(TRIDENT, 1);
		break;
	case 15:
		character->AddToInventory(WAR_PICK, 1);
		break;
	case 16:
		character->AddToInventory(WARHAMMER, 1);
		break;
	case 17:
		character->AddToInventory(WHIP, 1);
		break;
	}


	selection = GenerateRandomNumber(0, 11);
	switch (selection)
	{
	case 0:
		character->AddToInventory(CLUB, 1);
		break;
	case 1:
		character->AddToInventory(DAGGER, 1);
		break;
	case 2:
		character->AddToInventory(GREATAXE, 1);
		break;
	case 3:
		character->AddToInventory(GREATCLUB, 1);
		break;
	case 4:
		character->AddToInventory(HALBERD, 1);
		break;
	case 5:
		character->AddToInventory(HANDAXE, 1);
		break;
	case 6:
		character->AddToInventory(JAVELIN, 1);
		break;
	case 7:
		character->AddToInventory(LIGHT_HAMMER, 1);
		break;
	case 8:
		character->AddToInventory(MACE, 1);
		break;
	case 9:
		character->AddToInventory(QUARTERSTAFF, 1);
		break;
	case 10:
		character->AddToInventory(SICKLE, 1);
		break;
	case 11:
		character->AddToInventory(SPEAR, 1);
		break;
	}

	Character::SelectEquipmentPack(character, EXPLORERS_PACK);
	character->AddToInventory(JAVELIN, 4);
}