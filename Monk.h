#pragma once
#include "Character.h"

class Monk : public Character {
private:
	static const std::map<ABILITIES, int> MONK_ABILITY_LEVELS;

public:
	Monk(RACES race_id, BACKGROUNDS background_id);
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
	static void SkillOptions(Character* character, int total_trained_allowed);
};