#pragma once
#include "Character.h"

class Barbarian : public Character {
private:
	static const std::map<ABILITIES, int> BARBARIAN_ABILITY_LEVELS;

public:
	Barbarian(RACES race_id, BACKGROUNDS background_id);
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
	static void SkillOptions(Character* character, int total_trained_allowed);
};