#include "Cleric.h"

Cleric::Cleric()
{
	class_ID = CLERIC;
	abilities_map = &CLERIC_ABILITY_LEVELS;
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
			character->AddToInventory(MACE, 1);
			item_selected = true;
			break;
		case 1:
			if (character->getRaceId() == DWARF)
			{
				character->AddToInventory(WARHAMMER, 1);
				item_selected = true;
			}
			break;
		}
	}

	selection = GenerateRandomNumber(0, 2);
	switch (selection)
	{
	case 0:
		character->AddToInventory(MEDIUM_ARMOR_SCALE_MAIL, 1);
		break;
	case 1:
		character->AddToInventory(LIGHT_ARMOR_LEATHER, 1);
		break;
	case 2:
		character->AddToInventory(HEAVY_ARMOR_CHAIN_MAIL, 1);
		break;
	}

	selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		character->AddToInventory(CROSSBOW_LIGHT, 1);
		character->AddToInventory(CROSSBOW_BOLT, 20);
		break;
	case 1:
		character->AddToInventory(LIGHT_ARMOR_LEATHER, 1);
		break;
	case 2:
		character->AddToInventory(HEAVY_ARMOR_CHAIN_MAIL, 1);
		break;
	}
}

const std::map<ABILITIES, int> Cleric::CLERIC_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};