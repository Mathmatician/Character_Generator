#pragma once
#include "Character.h"

class Cleric : public Character {
private:
	static const std::map<ABILITIES, int> CLERIC_ABILITY_LEVELS;

public:
	Cleric(RACES race_id, BACKGROUNDS background_id);
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
	static void SkillOptions(Character* character, int total_trained_allowed);
	static void EquipItems(Character* character);
};