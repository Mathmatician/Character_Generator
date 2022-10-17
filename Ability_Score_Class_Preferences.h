#pragma once

class ABILITY_SCORE_PREFERENCE {
protected:
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;

public:
	virtual int getStrength() = 0;
	virtual int getDexterity() = 0;
	virtual int getConstitution() = 0;
	virtual int getIntelligence() = 0;
	virtual int getWisdom() = 0;
	virtual int getCharisma() = 0;
}; // pointer only

static class EQUAL_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	EQUAL_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} equal_ability_score_preference;

static class ARTIFICER_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	ARTIFICER_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} artificer_ability_score_preference;


static class BARBARIAN_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	BARBARIAN_ABILITY_SCORE_PREFERENCE()
	{
		strength = 90;
		dexterity = 1;
		constitution = 3;
		intelligence = 10;
		wisdom = 11;
		charisma = 7;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} barbarian_ability_score_preference;


static class BARD_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	BARD_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} bard_ability_score_preference;


static class CLERIC_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	CLERIC_ABILITY_SCORE_PREFERENCE()
	{
		strength = 90;
		dexterity = 1;
		constitution = 3;
		intelligence = 10;
		wisdom = 11;
		charisma = 7;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} cleric_ability_score_preference;


static class DRUID_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	DRUID_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} druid_ability_score_preference;


static class FIGHTER_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	FIGHTER_ABILITY_SCORE_PREFERENCE()
	{
		strength = 90;
		dexterity = 1;
		constitution = 3;
		intelligence = 10;
		wisdom = 11;
		charisma = 7;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} fighter_ability_score_preference;


static class MONK_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	MONK_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} monk_ability_score_preference;


static class PALADIN_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	PALADIN_ABILITY_SCORE_PREFERENCE()
	{
		strength = 90;
		dexterity = 1;
		constitution = 3;
		intelligence = 10;
		wisdom = 11;
		charisma = 7;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} paladin_ability_score_preference;


static class RANGER_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	RANGER_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} ranger_ability_score_preference;


static class ROGUE_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	ROGUE_ABILITY_SCORE_PREFERENCE()
	{
		strength = 90;
		dexterity = 1;
		constitution = 3;
		intelligence = 10;
		wisdom = 11;
		charisma = 7;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} rogue_ability_score_preference;


static class SORCERER_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	SORCERER_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} sorcerer_ability_score_preference;


static class WARLOCK_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	WARLOCK_ABILITY_SCORE_PREFERENCE()
	{
		strength = 90;
		dexterity = 1;
		constitution = 3;
		intelligence = 10;
		wisdom = 11;
		charisma = 7;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} warlock_ability_score_preference;


static class WIZARD_ABILITY_SCORE_PREFERENCE : public ABILITY_SCORE_PREFERENCE {
public:
	WIZARD_ABILITY_SCORE_PREFERENCE()
	{
		strength = 10;
		dexterity = 10;
		constitution = 10;
		intelligence = 10;
		wisdom = 10;
		charisma = 10;
	}
	virtual int getStrength() { return strength; }
	virtual int getDexterity() { return dexterity; }
	virtual int getConstitution() { return constitution; }
	virtual int getIntelligence() { return intelligence; }
	virtual int getWisdom() { return wisdom; }
	virtual int getCharisma() { return charisma; }

} wizard_ability_score_preference;
