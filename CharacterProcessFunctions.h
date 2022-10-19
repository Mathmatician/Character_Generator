#pragma once
#include <iostream>

#include "CharacterClasses.h"
#include "Ability_Score_Class_Preferences.h"

void CharacterCreationProcess(int class_id, int race_id, int background_id, int level, std::string player_name);
Character* SelectClass(int class_id);
int RollD6();
int RollD4();
int RollFourD6DropOne();
void RollAbilityScores(Character* character);
void RollForGold(Character* character);
void AddAbilityPointsByLevel(Character* character);
void AddAbilityPointsByRace(Character* character);
void SelectTrainedSkillsByClass(Character* character);
void SelectTrainedSkillsByBackground(Character* character);
void AddEquipmentByBackground(Character* character);
int LevelValidator(int level);
int SelectRandomAbilityScoreWithWeight();
int SelectRandomAbilityScoreWithWeight(ABILITY_SCORE_PREFERENCE* absp);
void DisplayCharacterStats(Character* character);
void BarbarianSkillOptions(Character* character, int total_trained_allowed);