#pragma once

// Dice
#define D4   "D4"
#define D6   "D6"
#define D8   "D8"
#define D10  "D10"
#define DP10 "DP10"
#define D12  "D12"
#define D20  "D20"

// Death Save definitions
#define SUCCESS 0
#define FAILURE 1

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
	HUMAN,
	ORC,
	HALFLING,
	DRAGONBORN,
	ELF,
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

// Attributes
static enum {
	STRENGTH,
	DEXTERITY,
	CONSTITUTION,
	INTELLIGENCE,
	WISDOM,
	CHARISMA,
	NUM_OF_ATTRIBUTES
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
	case HUMAN:
		return "Human";
	case ORC:
		return "Orc";
	case HALFLING:
		return "Halfling";
	case DRAGONBORN:
		return "Dragonborn";
	case ELF:
		return "Elf";
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