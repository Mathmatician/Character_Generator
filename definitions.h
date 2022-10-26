#pragma once

// Dice
#define NO_DICE	-1
#define D4		 0
#define D6		 1
#define D8		 2
#define D10		 3
#define DP10	 4
#define D12		 5
#define D20		 6

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


// Weapon damage types
#define BLUDGEONING 0
#define PIERCING	1
#define SLASHING	2

// Pound definition
#define POUND 100


static enum class WEAPON_PROPERTIES {
	NOTHING = -1,
	LIGHT,
	FINESSE,
	THROWN,
	TWO_HANDED,
	VERSATILE,
	AMMUNITION,
	LOADING,
	HEAVY,
	REACH,
	SPECIAL,
	NUM_OF_PROPERTIES
};

// Character Classes
static enum class CLASSES {
	NOTHING = -1,
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
static enum class RACES {
	NOTHING = -1,
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

// Languages
static enum class LANGUAGES {
	NOTHING = -1,
	COMMON_LANGUAGE,
	DWARVISH_LANGUAGE,
	ELVISH_LANGUAGE,
	GIANT_LANGUAGE,
	GNOMISH_LANGUAGE,
	GOBLIN_LANGUAGE,
	HALFLING_LANGUAGE,
	ORC_LANGUAGE,
	NUM_OF_LANGUAGES
};

// Exotic Languages
static enum class EXOTIC_LANGUAGES {
	NOTHING = -1,
	ABYSSAL_LANGUAGE,
	CELESTIAL_LANGUAGE,
	DRACONIC_LANGUAGE,
	DEEP_SPEECH_LANGUAGE,
	INFERNAL_LANGUAGE,
	PRIMORDIAL_LANGUAGE,
	SYLVAN_LANGUAGE,
	UNDERCOMMON_LANGUAGE,
	NUM_OF_EXOTIC_LANGUAGES
};

// Backgrounds
static enum class BACKGROUNDS {
	NOTHING = -1,
	ACOLYTE,
	CHARLATAN,
	CRIMINAL,
	ENTERTAINER,
	FOLK_HERO,
	GUILD_ARTISAN,
	HERMIT,
	NOBLE,
	OUTLANDER,
	SAGE,
	SAILOR,
	SOLDIER,
	URCHIN,
	NUM_OF_BACKGROUNDS
};

// Alignment
static enum class ALIGNMENTS {
	NOTHING = -1,
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
static enum class ABILITY_SCORES {
	NOTHING = -1,
	STRENGTH,
	DEXTERITY,
	CONSTITUTION,
	INTELLIGENCE,
	WISDOM,
	CHARISMA,
	NUM_OF_ABILITY_SCORES
};

// Skills
static enum class SKILLS {
	NOTHING = -1,
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
static enum class EQUIPMENT_PACKS {
	NOTHING = -1,
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
static enum class ITEMS {
	NOTHING = -1,
	LIGHT_ARMOR,
	MEDIUM_ARMOR,
	HEAVY_ARMOR,
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
	STICKS_OF_INCENSE,
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
	HOLY_SYMBOL,
	PRAYER_BOOK,
	PRAYER_WHEEL,
	BELT_POUCH,
	SIMPLE_WEAPONS,
	NUM_OF_EQUIPMENT_ITEMS
};

// Weapon info struct object
struct WEAPON_INFO {

	struct DICE_INFO {
		int dice = -1;
		int num_of_dice = -1;
	};

	ITEMS weapon_id = ITEMS::NOTHING;
	int cost = -1;
	std::vector<DICE_INFO> dice_info;
	int damage_type = -1;
	int weight = -1;
	std::vector<WEAPON_PROPERTIES> properties;

	void AddDiceInfo(int dice, int num)
	{
		DICE_INFO obj;

		if (dice < NO_DICE)
			dice = NO_DICE;
		else if (dice > D20)
			dice = D20;

		obj.dice = dice;

		if (obj.dice == NO_DICE)
			obj.num_of_dice = 0;
		else
			obj.num_of_dice = num;

		dice_info.push_back(obj);
	}

	void RemoveDiceInfoAtIndex(int index)
	{
		if (index < dice_info.size() && index >= 0)
			dice_info.erase(dice_info.begin() + index);
	}

	void AddProperty(WEAPON_PROPERTIES prop)
	{
		properties.push_back(prop);
	}

	void RemoveWeaponPropertyAtIndex(int index)
	{
		if (index < properties.size() && index >= 0)
			properties.erase(properties.begin() + index);
	}

	bool hasProperty(WEAPON_PROPERTIES prop)
	{
		for (auto& p : properties)
		{
			if (p == prop)
				return true;
		}

		return false;
	}

};

static WEAPON_INFO getWeaponInfo(ITEMS weapon);

static ABILITY_SCORES GetSKillType(SKILLS skill)
{
	switch (skill)
	{
	case SKILLS::ACROBATICS:
		return ABILITY_SCORES::DEXTERITY;
	case SKILLS::ANIMAL_HANDLING:
		return ABILITY_SCORES::WISDOM;
	case SKILLS::ARCANA:
		return ABILITY_SCORES::INTELLIGENCE;
	case SKILLS::ATHLETICS:
		return ABILITY_SCORES::STRENGTH;
	case SKILLS::DECEPTION:
		return ABILITY_SCORES::CHARISMA;
	case SKILLS::HISTORY:
		return ABILITY_SCORES::INTELLIGENCE;
	case SKILLS::INSIGHT:
		return ABILITY_SCORES::WISDOM;
	case SKILLS::INTIMIDATION:
		return ABILITY_SCORES::CHARISMA;
	case SKILLS::INVESTIGATION:
		return ABILITY_SCORES::INTELLIGENCE;
	case SKILLS::MEDICINE:
		return ABILITY_SCORES::WISDOM;
	case SKILLS::NATURE:
		return ABILITY_SCORES::INTELLIGENCE;
	case SKILLS::PERCEPTION:
		return ABILITY_SCORES::WISDOM;
	case SKILLS::PERFORMANCE:
		return ABILITY_SCORES::CHARISMA;
	case SKILLS::PERSUASION:
		return ABILITY_SCORES::CHARISMA;
	case SKILLS::RELIGION:
		return ABILITY_SCORES::INTELLIGENCE;
	case SKILLS::SLEIGHT_OF_HAND:
		return ABILITY_SCORES::DEXTERITY;
	case SKILLS::STEALTH:
		return ABILITY_SCORES::DEXTERITY;
	case SKILLS::SURVIVAL:
		return ABILITY_SCORES::WISDOM;
	}

	return ABILITY_SCORES::NOTHING;
}

static std::string GetSKillTypeText(SKILLS skill)
{
	switch (skill)
	{
	case SKILLS::ACROBATICS:
		return "DEXTERITY";
	case SKILLS::ANIMAL_HANDLING:
		return "WISDOM";
	case SKILLS::ARCANA:
		return "INTELLIGENCE";
	case SKILLS::ATHLETICS:
		return "STRENGTH";
	case SKILLS::DECEPTION:
		return "CHARISMA";
	case SKILLS::HISTORY:
		return "INTELLIGENCE";
	case SKILLS::INSIGHT:
		return "WISDOM";
	case SKILLS::INTIMIDATION:
		return "CHARISMA";
	case SKILLS::INVESTIGATION:
		return "INTELLIGENCE";
	case SKILLS::MEDICINE:
		return "WISDOM";
	case SKILLS::NATURE:
		return "INTELLIGENCE";
	case SKILLS::PERCEPTION:
		return "WISDOM";
	case SKILLS::PERFORMANCE:
		return "CHARISMA";
	case SKILLS::PERSUASION:
		return "CHARISMA";
	case SKILLS::RELIGION:
		return "INTELLIGENCE";
	case SKILLS::SLEIGHT_OF_HAND:
		return "DEXTERITY";
	case SKILLS::STEALTH:
		return "DEXTERITY";
	case SKILLS::SURVIVAL:
		return "WISDOM";
	}

	return "";
}

static std::string GetSkillText(SKILLS skill)
{
	switch (skill)
	{
	case SKILLS::ACROBATICS:
		return "ACROBATICS";
	case SKILLS::ANIMAL_HANDLING:
		return "ANIMAL_HANDLING";
	case SKILLS::ARCANA:
		return "ARCANA";
	case SKILLS::ATHLETICS:
		return "ATHLETICS";
	case SKILLS::DECEPTION:
		return "DECEPTION";
	case SKILLS::HISTORY:
		return "HISTORY";
	case SKILLS::INSIGHT:
		return "INSIGHT";
	case SKILLS::INTIMIDATION:
		return "INTIMIDATION";
	case SKILLS::INVESTIGATION:
		return "INVESTIGATION";
	case SKILLS::MEDICINE:
		return "MEDICINE";
	case SKILLS::NATURE:
		return "NATURE";
	case SKILLS::PERCEPTION:
		return "PERCEPTION";
	case SKILLS::PERFORMANCE:
		return "PERFORMANCE";
	case SKILLS::PERSUASION:
		return "PERSUASION";
	case SKILLS::RELIGION:
		return "RELIGION";
	case SKILLS::SLEIGHT_OF_HAND:
		return "SLEIGHT_OF_HAND";
	case SKILLS::STEALTH:
		return "STEALTH";
	case SKILLS::SURVIVAL:
		return "SURVIVAL";
	}

	return "";
}

static std::string GetAbilityScoreText(ABILITY_SCORES ability_id)
{
	switch (ability_id)
	{
	case ABILITY_SCORES::STRENGTH:
		return "STRENGTH";
		break;
	case ABILITY_SCORES::DEXTERITY:
		return "DEXTERITY";
		break;
	case ABILITY_SCORES::CONSTITUTION:
		return "CONSTITUTION";
		break;
	case ABILITY_SCORES::INTELLIGENCE:
		return "INTELLIGENCE";
		break;
	case ABILITY_SCORES::WISDOM:
		return "WISDOM";
		break;
	case ABILITY_SCORES::CHARISMA:
		return "CHARISMA";
		break;
	}

	return "";
}

static std::string GetBackgroundText(BACKGROUNDS background_id)
{
	switch (background_id)
	{
	case BACKGROUNDS::ACOLYTE:
		return "Acolyte";
	}

	return "";
}

static std::string GetRaceText(RACES race_id)
{
	switch (race_id)
	{
	case RACES::HILL_DWARF:
		return "Hill Dwarf";
	case RACES::MOUNTAIN_DWARF:
		return "Mountain Dwarf";
	case RACES::ELF:
		return "Elf";
	case RACES::HALFLING:
		return "Halfling";
	case RACES::HUMAN:
		return "Human";
	case RACES::DRAGONBORN:
		return "Dragonborn";
	case RACES::GNOME:
		return "Gnome";
	case RACES::HALF_ELF:
		return "Half-Elf";
	case RACES::HALF_ORC:
		return "Half-Orc";
	case RACES::TIEFLING:
		return "Tiefling";
	}

	return "";
}

static std::string GetAlignmentText(ALIGNMENTS alignment_id)
{
	switch (alignment_id)
	{
	case ALIGNMENTS::LAWFUL_GOOD:
		return "Lawful Good";
	case ALIGNMENTS::GOOD:
		return "Good";
	case ALIGNMENTS::CHAOTIC_GOOD:
		return "Chaotic Good";
	case ALIGNMENTS::LAWFUL_NEUTRAL:
		return "Lawful Neutral";
	case ALIGNMENTS::NEUTRAL:
		return "Neutral";
	case ALIGNMENTS::CHAOTIC_NEUTRAL:
		return "Chaotic Neutral";
	case ALIGNMENTS::LAWFUL_EVIL:
		return "Lawful Evil";
	case ALIGNMENTS::EVIL:
		return "Evil";
	case ALIGNMENTS::CHAOTIC_EVIL:
		return "Chaotic Evil";
	}

	return "";
}

static bool isTwoHandedWeapon(ITEMS weapon)
{
	WEAPON_INFO wpn = getWeaponInfo(weapon);
	return wpn.hasProperty(WEAPON_PROPERTIES::TWO_HANDED);
}

static bool isOneHandedWeapon(ITEMS weapon)
{
	return !isTwoHandedWeapon(weapon);
}

static int getArmorBaseValue(ITEMS armr)
{
	switch (armr)
	{
	case ITEMS::LIGHT_ARMOR_PADDED:
		return 11;
		break;
	case ITEMS::LIGHT_ARMOR_LEATHER:
		return 11;
		break;
	case ITEMS::LIGHT_ARMOR_STUDDED_LEATHER:
		return 12;
		break;
	case ITEMS::MEDIUM_ARMOR_HIDE:
		return 12;
		break;
	case ITEMS::MEDIUM_ARMOR_CHAIN_SHIRT:
		return 13;
		break;
	case ITEMS::MEDIUM_ARMOR_SCALE_MAIL:
		return 14;
		break;
	case ITEMS::MEDIUM_ARMOR_BREASTPLATE:
		return 14;
		break;
	case ITEMS::MEDIUM_ARMOR_HALFPLATE:
		return 15;
		break;
	case ITEMS::HEAVY_ARMOR_RING_MAIL:
		return 14;
	case ITEMS::HEAVY_ARMOR_CHAIN_MAIL:
		return 16;
	case ITEMS::HEAVY_ARMOR_SPLINT:
		return 17;
		break;
	case ITEMS::HEAVY_ARMOR_PLATE:
		return 18;
		break;
	}

	return -1;
}

static bool isLightArmor(ITEMS armr)
{
	switch (armr)
	{
	case ITEMS::LIGHT_ARMOR_PADDED:
		return true;
	case ITEMS::LIGHT_ARMOR_LEATHER:
		return true;
	case ITEMS::LIGHT_ARMOR_STUDDED_LEATHER:
		return true;
	}

	return false;
}

static bool isMediumArmor(ITEMS armr)
{
	switch (armr)
	{
	case ITEMS::MEDIUM_ARMOR_HIDE:
		return true;
	case ITEMS::MEDIUM_ARMOR_CHAIN_SHIRT:
		return true;
	case ITEMS::MEDIUM_ARMOR_SCALE_MAIL:
		return true;
	case ITEMS::MEDIUM_ARMOR_BREASTPLATE:
		return true;
	case ITEMS::MEDIUM_ARMOR_HALFPLATE:
		return true;
	}

	return false;
}

static bool isHeavyArmor(ITEMS armr)
{
	switch (armr)
	{
	case ITEMS::HEAVY_ARMOR_RING_MAIL:
		return true;
	case ITEMS::HEAVY_ARMOR_CHAIN_MAIL:
		return true;
	case ITEMS::HEAVY_ARMOR_SPLINT:
		return true;
	case ITEMS::HEAVY_ARMOR_PLATE:
		return true;
	}

	return false;
}

static bool isArmor(ITEMS armr)
{
	return (isLightArmor(armr) || isMediumArmor(armr) || isHeavyArmor(armr));
}

static bool isWeapon(ITEMS weapon)
{
	WEAPON_INFO weapon_info = getWeaponInfo(weapon);

	if (weapon_info.weapon_id == ITEMS::NOTHING)
		return false;

	return true;
}

static WEAPON_INFO getWeaponInfo(ITEMS weapon)
{
	WEAPON_INFO weapon_info;

	switch (weapon)
	{
	case ITEMS::CLUB:
		weapon_info.cost = 1 * SILVER;
		weapon_info.AddDiceInfo(D4, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		break;

	case ITEMS::DAGGER:
		weapon_info.cost = 2 * GOLD;
		weapon_info.AddDiceInfo(D4, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 1 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::FINESSE);
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	case ITEMS::GREATCLUB:
		weapon_info.cost = 2 * SILVER;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 10 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::HANDAXE:
		weapon_info.cost = 5 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	case ITEMS::JAVELIN:
		weapon_info.cost = 5 * SILVER;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	case ITEMS::LIGHT_HAMMER:
		weapon_info.cost = 2 * GOLD;
		weapon_info.AddDiceInfo(D4, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	case ITEMS::MACE:
		weapon_info.cost = 5 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 4 * POUND;
		break;

	case ITEMS::QUARTERSTAFF:
		weapon_info.cost = 2 * SILVER;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 4 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::VERSATILE);
		break;

	case ITEMS::SICKLE:
		weapon_info.cost = 1 * GOLD;
		weapon_info.AddDiceInfo(D4, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		break;

	case ITEMS::SPEAR:
		weapon_info.cost = 1 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 3 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	case ITEMS::CROSSBOW_LIGHT:
		weapon_info.cost = 25 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 5 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::AMMUNITION);
		break;

	case ITEMS::DART:
		weapon_info.cost = 5 * COPPER;
		weapon_info.AddDiceInfo(D4, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 0.25 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::FINESSE);
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	case ITEMS::SHORTBOW:
		weapon_info.cost = 25 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::AMMUNITION);
		break;

	case ITEMS::SLING:
		weapon_info.cost = 1 * SILVER;
		weapon_info.AddDiceInfo(D4, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 0;
		weapon_info.AddProperty(WEAPON_PROPERTIES::AMMUNITION);
		break;

	case ITEMS::BATTLEAXE:
		weapon_info.cost = 10 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 4 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::VERSATILE);
		break;

	case ITEMS::FLAIL:
		weapon_info.cost = 10 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 2 * POUND;
		break;

	case ITEMS::GLAIVE:
		weapon_info.cost = 20 * GOLD;
		weapon_info.AddDiceInfo(D10, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 6 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::REACH);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::GREATAXE:
		weapon_info.cost = 30 * GOLD;
		weapon_info.AddDiceInfo(D12, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 7 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::GREATSWORD:
		weapon_info.cost = 50 * GOLD;
		weapon_info.AddDiceInfo(D6, 2);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 6 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::HALBERD:
		weapon_info.cost = 20 * GOLD;
		weapon_info.AddDiceInfo(D10, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 6 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::REACH);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::LANCE:
		weapon_info.cost = 10 * GOLD;
		weapon_info.AddDiceInfo(D12, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 6 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::REACH);
		weapon_info.AddProperty(WEAPON_PROPERTIES::SPECIAL);
		break;

	case ITEMS::LONGSWORD:
		weapon_info.cost = 15 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 3 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::VERSATILE);
		break;

	case ITEMS::MAUL:
		weapon_info.cost = 10 * GOLD;
		weapon_info.AddDiceInfo(D6, 2);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 10 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::MORNINGSTAR:
		weapon_info.cost = 15 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 4 * POUND;
		break;

	case ITEMS::PIKE:
		weapon_info.cost = 5 * GOLD;
		weapon_info.AddDiceInfo(D10, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 18 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::RAPIER:
		weapon_info.cost = 25 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::FINESSE);
		break;

	case ITEMS::SCIMITAR:
		weapon_info.cost = 25 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 3 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::FINESSE);
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		break;

	case ITEMS::SHORTSWORD:
		weapon_info.cost = 10 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::FINESSE);
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		break;

	case ITEMS::TRIDENT:
		weapon_info.cost = 5 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 4 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	case ITEMS::WAR_PICK:
		weapon_info.cost = 5 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 2 * POUND;
		break;

	case ITEMS::WARHAMMER:
		weapon_info.cost = 15 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = BLUDGEONING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::VERSATILE);
		break;

	case ITEMS::WHIP:
		weapon_info.cost = 2 * GOLD;
		weapon_info.AddDiceInfo(D4, 1);
		weapon_info.damage_type = SLASHING;
		weapon_info.weight = 3 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::FINESSE);
		weapon_info.AddProperty(WEAPON_PROPERTIES::REACH);
		break;

	case ITEMS::BLOWGUN:
		weapon_info.cost = 10 * GOLD;
		weapon_info.AddDiceInfo(NO_DICE, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 1 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::AMMUNITION);
		weapon_info.AddProperty(WEAPON_PROPERTIES::LOADING);
		break;

	case ITEMS::CROSSBOW_HAND:
		weapon_info.cost = 75 * GOLD;
		weapon_info.AddDiceInfo(D6, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 3 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::AMMUNITION);
		weapon_info.AddProperty(WEAPON_PROPERTIES::LIGHT);
		weapon_info.AddProperty(WEAPON_PROPERTIES::LOADING);
		break;

	case ITEMS::CROSSBOW_HEAVY:
		weapon_info.cost = 50 * GOLD;
		weapon_info.AddDiceInfo(D10, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 18 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::AMMUNITION);
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::LOADING);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::LONGBOW:
		weapon_info.cost = 50 * GOLD;
		weapon_info.AddDiceInfo(D8, 1);
		weapon_info.damage_type = PIERCING;
		weapon_info.weight = 2 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::AMMUNITION);
		weapon_info.AddProperty(WEAPON_PROPERTIES::HEAVY);
		weapon_info.AddProperty(WEAPON_PROPERTIES::TWO_HANDED);
		break;

	case ITEMS::NET:
		weapon_info.cost = 1 * GOLD;
		weapon_info.weight = 3 * POUND;
		weapon_info.AddProperty(WEAPON_PROPERTIES::SPECIAL);
		weapon_info.AddProperty(WEAPON_PROPERTIES::THROWN);
		break;

	default: // Unarmed strike
		weapon_info.damage_type = BLUDGEONING;
		return weapon_info;
	}

	weapon_info.weapon_id = weapon;

	return weapon_info;
}