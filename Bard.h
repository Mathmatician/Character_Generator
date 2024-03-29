#pragma once
#include "Character.h"

class Bard : public Character {
private:
	static const std::map<ABILITIES, int> BARD_ABILITY_LEVELS;

public:
	Bard(RACES race_id, BACKGROUNDS background_id);
	virtual int ABILITY_LEVEL(ABILITIES ability);
	static void EquipmentSelection(Character* character);
	static void SkillOptions(Character* character, int total_trained_allowed);
	static void InstrumentProficiencySelection(Character* character);
	static void EquipItems(Character* character);
};