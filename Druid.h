#pragma once
#include "Character.h"

class Druid : public Character {
private:
	static const std::map<ABILITIES, int> DRUID_ABILITY_LEVELS;

public:
	Druid(RACES race_id, BACKGROUNDS background_id);
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
	static void SkillOptions(Character* character, int total_trained_allowed);
	static void EquipItems(Character* character);
};