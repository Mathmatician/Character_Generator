#pragma once

// Dice
#define D4   0
#define D6   1
#define D8   2
#define D10  3
#define DP10 4
#define D12  5
#define D20  6

// Death Save definitions
#define SUCCESS 0
#define FAILURE 1

// Max Level
#define MAX_LEVEL 20

// Currency rates in copper (cp)
#define COPPER		1
#define SILVER		10
#define ELECTRUM	50
#define GOLD		100
#define PLATINUM	1000

// Character Classes
static enum {
	ARTIFICER,
	BARBARIAN,
	BARD,
	CLERIC,
	DRUID,
	FIGHTER,
	MONK,
	PALADIN,
	RANGER,
	ROGUE,
	SORCERER,
	WARLOCK,
	WIZARD,
	NUM_OF_CLASSES
};

// Races
static enum {
	HILL_DWARF,
	MOUNTAIN_DWARF,
	ELF,
	HALFLING,
	HUMAN,
	DRAGONBORN,
	GNOME,
	HALF_ELF,
	HALF_ORC,
	TIEFLING,
	NUM_OF_RACES
};

// Backgrounds
static enum {
	HIGHLANDER,
	NUM_OF_BACKGROUNDS
};

// Alignment
static enum {
	LAWFUL_GOOD,
	GOOD,
	CHAOTIC_GOOD,
	LAWFUL_NEUTRAL,
	NEUTRAL,
	CHAOTIC_NEUTRAL,
	LAWFUL_EVIL,
	EVIL,
	CHAOTIC_EVIL,
	NUM_OF_ALIGNMENTS
};

// Ability Score
static enum {
	STRENGTH,
	DEXTERITY,
	CONSTITUTION,
	INTELLIGENCE,
	WISDOM,
	CHARISMA,
	NUM_OF_ABILITY_SCORES
};

// Skills
static enum {
	ACROBATICS,
	ANIMAL_HANDLING,
	ARCANA,
	ATHLETICS,
	DECEPTION,
	HISTORY,
	INSIGHT,
	INTIMIDATION,
	INVESTIGATION,
	MEDICINE,
	NATURE,
	PERCEPTION,
	PERFORMANCE,
	PERSUASION,
	RELIGION,
	SLEIGHT_OF_HAND,
	STEALTH,
	SURVIVAL,
	NUM_OF_SKILLS // keep this last
};

// Equipment Packs
static enum {
	BURGLERS_PACK,
	DIPLOMATS_PACK,
	DUNGEONEERS_PACK,
	ENTERTAINERS_PACK,
	EXPLORERS_PACK,
	PRIESTS_PACK,
	SCHOLARS_PACK,
	NUM_OF_EQUIPMENT_PACKS
};

// Equipment (and there's a LOT)
static enum {
	LIGHT_ARMOR_PADDED,
	LIGHT_ARMOR_LEATHER,
	LIGHT_ARMOR_STUDDED_LEATHER,
	MEDIUM_ARMOR_HIDE,
	MEDIUM_ARMOR_CHAIN_SHIRT,
	MEDIUM_ARMOR_SCALE_MAIL,
	MEDIUM_ARMOR_BREASTPLATE,
	MEDIUM_ARMOR_HALFPLATE,
	HEAVY_ARMOR_RING_MAIL,
	HEAVY_ARMOR_CHAIN_MAIL,
	HEAVY_ARMOR_SPLINT,
	HEAVY_ARMOR_PLATE,
	SHIELD,
	LEATHER_ARMOR,
	CLUB,
	DAGGER,
	GREATCLUB,
	HANDAXE,
	JAVELIN,
	LIGHT_HAMMER,
	MACE,
	QUARTERSTAFF,
	SICKLE,
	SPEAR,
	CROSSBOW_LIGHT,
	DART,
	SHORTBOW,
	SLING,
	BATTLEAXE,
	FLAIL,
	GLAIVE,
	GREATAXE,
	GREATSWORD,
	HALBERD,
	LANCE,
	LONGSWORD,
	MAUL,
	MORNINGSTAR,
	PIKE,
	RAPIER,
	SCIMITAR,
	SHORTSWORD,
	TRIDENT,
	WAR_PICK,
	WARHAMMER,
	WHIP,
	BLOWGUN,
	CROSSBOW_HAND,
	CROSSBOW_HEAVY,
	LONGBOW,
	NET,
	ABACUS,
	ALMS_BOX,
	VIAL_OF_ACID,
	FLASK_OF_ALCHEMIST_FIRE,
	ARROW,
	BLOCKS_OF_INCENSE,
	BLOWGUN_NEEDLE,
	CENSER,
	CROSSBOW_BOLT,
	SLING_BULLET,
	VIAL_OF_ANTITOXIN,
	CRYSTAL,
	ORB,
	ROD,
	STAFF,
	WAND,
	BACKPACK,
	BALL_BEARING,
	BAG,
	BARREL,
	BASKET,
	BEDROLL,
	BELL,
	BLANKET,
	BLOCK_AND_TACKLE,
	BOOK,
	BOTTLE_GLASS,
	BUCKET,
	CALTROP,
	CANDLE,
	CROSSBOW_BOLT_CASE,
	MAP_OR_SCROLL_CASE,
	CHAIN_10FT,
	CHALK,
	CHEST,
	CLIMBERS_KIT,
	COMMON_CLOTHES,
	COSTUME_CLOTHES,
	FINE_CLOTHES,
	TRAVELERS_CLOTHES,
	COMPONENTS_POUCH,
	CROWBAR,
	SPRIG_OF_MISTLETOE,
	TOTEM,
	WOODEN_STAFF,
	YEW_WAND,
	FISHING_TACKLE,
	FLASK_OR_TANKARD,
	GRAPPLING_HOOK,
	HAMMER,
	SLEDGE_HAMMER,
	HEALERS_KIT,
	AMULET,
	EMBLEM,
	RELIQUARY,
	FLASK_OF_HOLY_WATER,
	FLASK,
	HOURGLASS,
	HUNTING_TRAP,
	BOTTLE_OF_INK,
	INK_PEN,
	JUG_OR_PITCHER,
	LADDER_10FT,
	LAMP,
	BULLSEYE_LANTERN,
	HOODED_LANTERN,
	LOCK,
	MAGNIFYING_GLASS,
	MANACLES,
	MESS_KIT,
	STEEL_MIRROR,
	FLASK_OF_OIL,
	PAPER,
	PARCHMENT,
	VIAL_OF_PERFUME,
	MINERS_PICK,
	PITON,
	VIAL_OF_BASIC_POISON,
	POLE_10FT,
	IRON_POT,
	POTION_OF_HEALING,
	POUCH,
	QUIVER,
	PORTABLE_RAM,
	RATION,
	ROBES,
	HEMPEN_ROPE_50FT,
	SILK_ROPE_50FT,
	SACK,
	MERCHANTS_SCALE,
	SEALING_WAX,
	SHOVEL,
	SIGNAL_WHISTLE,
	SIGNET_RING,
	SOAP,
	SPELLBOOK,
	IRON_SPIKE,
	SPYGLASS,
	TWO_PERSON_TENT,
	TINDERBOX,
	TORCH,
	VESTMENTS,
	VIAL,
	WATERSKIN,
	WHETSTONE,
	STRING_10FT,
	ARTISAN_TOOLS,
	DISGUISE_KIT,
	FORGERY_KIT,
	GAMING_SET,
	HERBALISM_KIT,
	MUSICAL_INSTRUMENT,
	NAVIGATOR_TOOLS,
	POISONERS_KIT,
	THIEVES_TOOLS,
	BOOK_OF_LORE,
	BAG_OF_SAND,
	SMALL_KNIFE,
	BAGPIPE,
	DRUM,
	DULCIMER,
	FLUTE,
	LUTE,
	LYRE,
	HORN,
	PAN_FLUTE,
	SHAWM,
	VIOL,
	NUM_OF_EQUIPMENT_ITEMS
};

static int GetSKillType(int skill)
{
	switch (skill)
	{
	case ACROBATICS:
		return DEXTERITY;
	case ANIMAL_HANDLING:
		return WISDOM;
	case ARCANA:
		return INTELLIGENCE;
	case ATHLETICS:
		return STRENGTH;
	case DECEPTION:
		return CHARISMA;
	case HISTORY:
		return INTELLIGENCE;
	case INSIGHT:
		return WISDOM;
	case INTIMIDATION:
		return CHARISMA;
	case INVESTIGATION:
		return INTELLIGENCE;
	case MEDICINE:
		return WISDOM;
	case NATURE:
		return INTELLIGENCE;
	case PERCEPTION:
		return WISDOM;
	case PERFORMANCE:
		return CHARISMA;
	case PERSUASION:
		return CHARISMA;
	case RELIGION:
		return INTELLIGENCE;
	case SLEIGHT_OF_HAND:
		return DEXTERITY;
	case STEALTH:
		return DEXTERITY;
	case SURVIVAL:
		return WISDOM;
	}

	return -1;
}

static std::string GetSKillTypeText(int skill)
{
	switch (skill)
	{
	case ACROBATICS:
		return "DEXTERITY";
	case ANIMAL_HANDLING:
		return "WISDOM";
	case ARCANA:
		return "INTELLIGENCE";
	case ATHLETICS:
		return "STRENGTH";
	case DECEPTION:
		return "CHARISMA";
	case HISTORY:
		return "INTELLIGENCE";
	case INSIGHT:
		return "WISDOM";
	case INTIMIDATION:
		return "CHARISMA";
	case INVESTIGATION:
		return "INTELLIGENCE";
	case MEDICINE:
		return "WISDOM";
	case NATURE:
		return "INTELLIGENCE";
	case PERCEPTION:
		return "WISDOM";
	case PERFORMANCE:
		return "CHARISMA";
	case PERSUASION:
		return "CHARISMA";
	case RELIGION:
		return "INTELLIGENCE";
	case SLEIGHT_OF_HAND:
		return "DEXTERITY";
	case STEALTH:
		return "DEXTERITY";
	case SURVIVAL:
		return "WISDOM";
	}

	return "";
}

static std::string GetSkillText(int skill)
{
	switch (skill)
	{
	case ACROBATICS:
		return "ACROBATICS";
	case ANIMAL_HANDLING:
		return "ANIMAL_HANDLING";
	case ARCANA:
		return "ARCANA";
	case ATHLETICS:
		return "ATHLETICS";
	case DECEPTION:
		return "DECEPTION";
	case HISTORY:
		return "HISTORY";
	case INSIGHT:
		return "INSIGHT";
	case INTIMIDATION:
		return "INTIMIDATION";
	case INVESTIGATION:
		return "INVESTIGATION";
	case MEDICINE:
		return "MEDICINE";
	case NATURE:
		return "NATURE";
	case PERCEPTION:
		return "PERCEPTION";
	case PERFORMANCE:
		return "PERFORMANCE";
	case PERSUASION:
		return "PERSUASION";
	case RELIGION:
		return "RELIGION";
	case SLEIGHT_OF_HAND:
		return "SLEIGHT_OF_HAND";
	case STEALTH:
		return "STEALTH";
	case SURVIVAL:
		return "SURVIVAL";
	}

	return "";
}

static std::string GetAbilityScoreText(int ability_id)
{
	switch (ability_id)
	{
	case STRENGTH:
		return "STRENGTH";
		break;
	case DEXTERITY:
		return "DEXTERITY";
		break;
	case CONSTITUTION:
		return "CONSTITUTION";
		break;
	case INTELLIGENCE:
		return "INTELLIGENCE";
		break;
	case WISDOM:
		return "WISDOM";
		break;
	case CHARISMA:
		return "CHARISMA";
		break;
	}

	return "";
}

static std::string GetBackgroundText(int background_id)
{
	switch (background_id)
	{
	case HIGHLANDER:
		return "Highlander";
	}

	return "";
}

static std::string GetRaceText(int race_id)
{
	switch (race_id)
	{
	case HILL_DWARF:
		return "Hill Dwarf";
	case MOUNTAIN_DWARF:
		return "Mountain Dwarf";
	case ELF:
		return "Elf";
	case HALFLING:
		return "Halfling";
	case HUMAN:
		return "Human";
	case DRAGONBORN:
		return "Dragonborn";
	case GNOME:
		return "Gnome";
	case HALF_ELF:
		return "Half-Elf";
	case HALF_ORC:
		return "Half-Orc";
	case TIEFLING:
		return "Tiefling";
	}

	return "";
}

static std::string GetAlignmentText(int alignment_id)
{
	switch (alignment_id)
	{
	case LAWFUL_GOOD:
		return "Lawful Good";
	case GOOD:
		return "Good";
	case CHAOTIC_GOOD:
		return "Chaotic Good";
	case LAWFUL_NEUTRAL:
		return "Lawful Neutral";
	case NEUTRAL:
		return "Neutral";
	case CHAOTIC_NEUTRAL:
		return "Chaotic Neutral";
	case LAWFUL_EVIL:
		return "Lawful Evil";
	case EVIL:
		return "Evil";
	case CHAOTIC_EVIL:
		return "Chaotic Evil";
	}

	return "";
}
