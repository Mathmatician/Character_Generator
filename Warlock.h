#pragma once
#include "Character.h"

class Warlock : public Character {
private:
	static const std::map<ABILITIES, int> WARLOCK_ABILITY_LEVELS;

public:
	Warlock(RACES race_id, BACKGROUNDS background_id);
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
	static void SkillOptions(Character* character, int total_trained_allowed);
	static void EquipItems(Character* character);
};