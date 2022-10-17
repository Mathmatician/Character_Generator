#pragma once
#include <string>
#include <vector>

#include "definitions.h"
#include "Ability_Definitions.h"
#include "Custom_Random.h"

class Character {
private:
	std::string character_name;
	int level;
	int background;
	std::string player_name;
	int race;
	int alignment;
	int experience_points;
	int armor_class;
	int initiative;
	int speed;
	int max_hitpoints;
	int current_hitpoints;
	int temporary_hitpoints;
	std::string hitDice; // maybe this is more complicated?

	std::map<int, int> inventory;
	float copper;
	std::vector<ABILITIES> ability_list;
	std::vector<FEATS> feat_list;

	struct DeathSaves {
		int successes = 0;
		int failures = 0;
	} deathSaves;

	struct SKILLS {
		int trained = 0;
		int value = 0;
	} skills[NUM_OF_SKILLS];
	
	int ability_scores[NUM_OF_ABILITY_SCORES];

	static const std::map<FEATS, int> FEAT_LEVEL_REQUIREMENTS;

protected:
	int class_ID;
	const std::map<ABILITIES, int>* abilities_map;

public:
	void SetCharacterName(std::string nm);
	void SetLevel(int lvl);
	void SetBackground(int bckground);
	void SetPlayerName(std::string nm);
	void SelectRace(int rc);
	void SelectAlignment(int algn);
	void SetExperiencePoints(int exp);
	void SetArmorClass(int ac);
	void SetInitiative(int init);
	void SetSpeed(int spd);
	void SetMaxHitpoints(int hp);
	void SetCurrentHitpoints(int hp);
	void SetTemporaryHitpoints(int hp);
	void AddToInventory(int itm, int quantity);
	void RemoveFromInventory(int, int quantity);
	void SetMoneyAmount(int mny);
	void AddMoney(int mny);
	void SubtractMoney(int mny);
	void SetAbilityScore(int attr_id, int value);
	void AddToAbilityScore(int attr_id, int value);
	void SetSkill(int skill_id, int value, int trained);
	void SetSkillValue(int skill_id, int value);
	void MarkSkillTrained(int skill_id, int trained);
	bool AddAbility(ABILITIES ability_id);
	bool RemoveAbility(ABILITIES ability_id);
	bool HasAbility(ABILITIES ability_id);
	bool AddFeat(FEATS ability_id);
	bool RemoveFeat(FEATS ability_id);
	bool HasFeat(FEATS ability_id);
	void SetDeathSaves(int death_save_id);
	void ResetDeathSaves();
	void SetAllSkillsByAbilityModifiers();

	const std::string getCharacterName();
	const int getLevel();
	const int getBackground();
	const std::string getPlayerName();
	const int getRaceId();
	const int getClassId();
	const std::string getAlignment();
	const int getExperiencePoints();
	const int getArmorClass();
	const int getInitiative();
	const int getSpeed();
	const int getMaxHitpoints();
	const int getCurrentHitpoints();
	const int getTemporaryHitpoints();
	const std::map<int, int>& getInventory();
	const int getAbilityScore(int attr_id);
	const int getAbilityModifier(int attr_id);
	const int getProficiencyBonus();
	const int getSkillValue(int skill_id);
	const int getMoneyInCoper();
	const int getMoneyInSilver();
	const int getMoneyInElectrum();
	const int getMoneyInGold();
	const int getMoneyInPlatinum();
	const bool isTrainedInSkill(int skill_id);

	virtual int ABILITY_LEVEL(ABILITIES ability) = 0;

	static int FEAT_LEVELS(FEATS feat_id);
	static void SelectEquipmentPack(Character* character, int equipment_pack_id);
};
