#pragma once
#include "Character.h"

static void BurglersPack(Character* character)
{
	character->AddToInventory(BALL_BEARING, 1000);
	character->AddToInventory(STRING_10FT, 1);
	character->AddToInventory(BELL, 1);
	character->AddToInventory(CANDLE, 5);
	character->AddToInventory(CROWBAR, 1);
	character->AddToInventory(HAMMER, 1);
	character->AddToInventory(PITON, 10);
	character->AddToInventory(HOODED_LANTERN, 1);
	character->AddToInventory(FLASK_OF_OIL, 2);
	character->AddToInventory(RATION, 5);
	character->AddToInventory(TINDERBOX, 1);
	character->AddToInventory(WATERSKIN, 1);
	character->AddToInventory(HEMPEN_ROPE_50FT, 1);
}

static void DiplomatsPack(Character* character)
{
	character->AddToInventory(CHEST, 1);
	character->AddToInventory(MAP_OR_SCROLL_CASE, 2);
	character->AddToInventory(FINE_CLOTHES, 1);
	character->AddToInventory(BOTTLE_OF_INK, 1);
	character->AddToInventory(INK_PEN, 1);
	character->AddToInventory(LAMP, 1);
	character->AddToInventory(FLASK_OF_OIL, 2);
	character->AddToInventory(PAPER, 5);
	character->AddToInventory(VIAL_OF_PERFUME, 1);
	character->AddToInventory(SEALING_WAX, 1);
	character->AddToInventory(SOAP, 1);
}

static void DungeoneersPack(Character* character)
{
	character->AddToInventory(BACKPACK, 1);
	character->AddToInventory(CROWBAR, 1);
	character->AddToInventory(HAMMER, 1);
	character->AddToInventory(PITON, 10);
	character->AddToInventory(TORCH, 10);
	character->AddToInventory(TINDERBOX, 1);
	character->AddToInventory(RATION, 10);
	character->AddToInventory(WATERSKIN, 1);
	character->AddToInventory(HEMPEN_ROPE_50FT, 1);
}

static void EntertainersPack(Character* character)
{
	character->AddToInventory(BACKPACK, 1);
	character->AddToInventory(BEDROLL, 1);
	character->AddToInventory(COSTUME_CLOTHES, 2);
	character->AddToInventory(CANDLE, 5);
	character->AddToInventory(RATION, 5);
	character->AddToInventory(WATERSKIN, 1);
	character->AddToInventory(DISGUISE_KIT, 1);
}

static void ExploerersPack(Character* character)
{
	character->AddToInventory(BACKPACK, 1);
	character->AddToInventory(BEDROLL, 1);
	character->AddToInventory(MESS_KIT, 1);
	character->AddToInventory(TORCH, 10);
	character->AddToInventory(RATION, 10);
	character->AddToInventory(WATERSKIN, 1);
	character->AddToInventory(HEMPEN_ROPE_50FT, 1);
}

static void PriestsPack(Character* character)
{
	character->AddToInventory(BACKPACK, 1);
	character->AddToInventory(BLANKET, 1);
	character->AddToInventory(CANDLE, 10);
	character->AddToInventory(TINDERBOX, 1);
	character->AddToInventory(ALMS_BOX, 1);
	character->AddToInventory(BLOCKS_OF_INCENSE, 2);
	character->AddToInventory(CENSER, 1);
	character->AddToInventory(VESTMENTS, 1); // what is even is this?
	character->AddToInventory(RATION, 2);
	character->AddToInventory(WATERSKIN, 1);
}

static void ScholarsPack(Character* character)
{
	character->AddToInventory(BACKPACK, 1);
	character->AddToInventory(BOOK_OF_LORE, 1);
	character->AddToInventory(BOTTLE_OF_INK, 1);
	character->AddToInventory(INK_PEN, 1);
	character->AddToInventory(PARCHMENT, 10);
	character->AddToInventory(BAG_OF_SAND, 1);
	character->AddToInventory(SMALL_KNIFE, 1);
}