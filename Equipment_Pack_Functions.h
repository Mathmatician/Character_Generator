#pragma once
#include "Character.h"

static void BurglersPack(Character* character)
{
	character->AddToInventory(ITEMS::BALL_BEARING, 1000);
	character->AddToInventory(ITEMS::STRING_10FT, 1);
	character->AddToInventory(ITEMS::BELL, 1);
	character->AddToInventory(ITEMS::CANDLE, 5);
	character->AddToInventory(ITEMS::CROWBAR, 1);
	character->AddToInventory(ITEMS::HAMMER, 1);
	character->AddToInventory(ITEMS::PITON, 10);
	character->AddToInventory(ITEMS::HOODED_LANTERN, 1);
	character->AddToInventory(ITEMS::FLASK_OF_OIL, 2);
	character->AddToInventory(ITEMS::RATION, 5);
	character->AddToInventory(ITEMS::TINDERBOX, 1);
	character->AddToInventory(ITEMS::WATERSKIN, 1);
	character->AddToInventory(ITEMS::HEMPEN_ROPE_50FT, 1);
}

static void DiplomatsPack(Character* character)
{
	character->AddToInventory(ITEMS::CHEST, 1);
	character->AddToInventory(ITEMS::MAP_OR_SCROLL_CASE, 2);
	character->AddToInventory(ITEMS::FINE_CLOTHES, 1);
	character->AddToInventory(ITEMS::BOTTLE_OF_INK, 1);
	character->AddToInventory(ITEMS::INK_PEN, 1);
	character->AddToInventory(ITEMS::LAMP, 1);
	character->AddToInventory(ITEMS::FLASK_OF_OIL, 2);
	character->AddToInventory(ITEMS::PAPER, 5);
	character->AddToInventory(ITEMS::VIAL_OF_PERFUME, 1);
	character->AddToInventory(ITEMS::SEALING_WAX, 1);
	character->AddToInventory(ITEMS::SOAP, 1);
}

static void DungeoneersPack(Character* character)
{
	character->AddToInventory(ITEMS::BACKPACK, 1);
	character->AddToInventory(ITEMS::CROWBAR, 1);
	character->AddToInventory(ITEMS::HAMMER, 1);
	character->AddToInventory(ITEMS::PITON, 10);
	character->AddToInventory(ITEMS::TORCH, 10);
	character->AddToInventory(ITEMS::TINDERBOX, 1);
	character->AddToInventory(ITEMS::RATION, 10);
	character->AddToInventory(ITEMS::WATERSKIN, 1);
	character->AddToInventory(ITEMS::HEMPEN_ROPE_50FT, 1);
}

static void EntertainersPack(Character* character)
{
	character->AddToInventory(ITEMS::BACKPACK, 1);
	character->AddToInventory(ITEMS::BEDROLL, 1);
	character->AddToInventory(ITEMS::COSTUME_CLOTHES, 2);
	character->AddToInventory(ITEMS::CANDLE, 5);
	character->AddToInventory(ITEMS::RATION, 5);
	character->AddToInventory(ITEMS::WATERSKIN, 1);
	character->AddToInventory(ITEMS::DISGUISE_KIT, 1);
}

static void ExploerersPack(Character* character)
{
	character->AddToInventory(ITEMS::BACKPACK, 1);
	character->AddToInventory(ITEMS::BEDROLL, 1);
	character->AddToInventory(ITEMS::MESS_KIT, 1);
	character->AddToInventory(ITEMS::TORCH, 10);
	character->AddToInventory(ITEMS::RATION, 10);
	character->AddToInventory(ITEMS::WATERSKIN, 1);
	character->AddToInventory(ITEMS::HEMPEN_ROPE_50FT, 1);
}

static void PriestsPack(Character* character)
{
	character->AddToInventory(ITEMS::BACKPACK, 1);
	character->AddToInventory(ITEMS::BLANKET, 1);
	character->AddToInventory(ITEMS::CANDLE, 10);
	character->AddToInventory(ITEMS::TINDERBOX, 1);
	character->AddToInventory(ITEMS::ALMS_BOX, 1);
	character->AddToInventory(ITEMS::BLOCKS_OF_INCENSE, 2);
	character->AddToInventory(ITEMS::CENSER, 1);
	character->AddToInventory(ITEMS::VESTMENTS, 1); // what is even is this?
	character->AddToInventory(ITEMS::RATION, 2);
	character->AddToInventory(ITEMS::WATERSKIN, 1);
}

static void ScholarsPack(Character* character)
{
	character->AddToInventory(ITEMS::BACKPACK, 1);
	character->AddToInventory(ITEMS::BOOK_OF_LORE, 1);
	character->AddToInventory(ITEMS::BOTTLE_OF_INK, 1);
	character->AddToInventory(ITEMS::INK_PEN, 1);
	character->AddToInventory(ITEMS::PARCHMENT, 10);
	character->AddToInventory(ITEMS::BAG_OF_SAND, 1);
	character->AddToInventory(ITEMS::SMALL_KNIFE, 1);
}