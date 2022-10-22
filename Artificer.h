#pragma once
#include "Character.h"

class Artificer : public Character {
private:
	static const std::map<ABILITIES, int> ARTIFICER_ABILITY_LEVELS;

public:
	Artificer(RACES race_id, BACKGROUNDS background_id);
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
	static void SkillOptions(Character* character, int total_trained_allowed);
};