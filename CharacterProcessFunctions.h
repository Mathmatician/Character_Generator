#pragma once
#include <iostream>

#include "CharacterClasses.h"
#include "Ability_Score_Class_Preferences.h"

void CharacterCreationProcess(CLASSES class_id, RACES race_id, BACKGROUNDS background_id, int level, std::string player_name);
Character* SelectClass(CLASSES class_id, RACES race_id, BACKGROUNDS background_id);
int RollDice(int dice);
int RollFourD6DropOne();
void RollAbilityScores(Character* character);
void RollForGold(Character* character);
void AddAbilityPointsByLevel(Character* character);
void AddFeat(Character* character);
void AddProficiencyByBackground(Character* character);
void AddAbilityPointsByRace(Character* character);
void SetCharacterSpeed(Character* character);
void SelectTrainedSkillsByBackground(Character* character);
void SelectTrainedSkillsByClass(Character* character)
void SetArmorClass(Character* character);
void AddEquipmentByBackground(Character* character);
int LevelValidator(int level);
void SelectLanguagesByBackground(Character* character);
void SelectLanguagesByRace(Character* character);
void SelectNumOfLanguages(Character* character, int num_of_standard, int num_of_exotic);
ABILITY_SCORES SelectRandomAbilityScoreWithWeight();
ABILITY_SCORES SelectRandomAbilityScoreWithWeight(ABILITY_SCORE_PREFERENCE* absp);
void SetHitPoints(Character* character);
void DisplayCharacterStats(Character* character);

// Background equipment selection functions
void AcolyteEquipmentSelection(Character* character);