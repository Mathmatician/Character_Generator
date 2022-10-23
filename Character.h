#pragma once
#include <string>
#include <vector>
#include <map>

#include "definitions.h"
#include "Ability_Definitions.h"
#include "Custom_Random.h"

class Character {
private:
	std::string character_name;
	int level = 1;
	BACKGROUNDS background = BACKGROUNDS::NOTHING;
	std::string player_name;
	RACES race = RACES::NOTHING;
	ALIGNMENTS alignment = ALIGNMENTS::NOTHING;
	int experience_points;
	int armor_class;
	int initiative;
	int speed;
	int max_hitpoints;
	int current_hitpoints;
	int temporary_hitpoints;
	float copper;

	ITEMS current_attire = ITEMS::NOTHING;
	ITEMS left_hand = ITEMS::NOTHING;
	ITEMS right_hand = ITEMS::NOTHING;

	struct HITDICE {
		int total = 0;
		int dice_type = 0;
	} hitDice;

	struct DeathSaves {
		int successes = 0;
		int failures = 0;
	} deathSaves;

	std::map<ITEMS, int> inventory;
	std::vector<ABILITIES> ability_list;
	std::vector<FEATS> feat_list;
	std::vector<TRAITS> trait_list;
	std::vector<LANGUAGES> language_list;
	std::vector<EXOTIC_LANGUAGES> exotic_language_list;

	struct Proficiencies {
		std::vector<ITEMS> armor;
		std::vector<ITEMS> weapons;
		std::vector<ITEMS> tools;
		std::vector<ABILITY_SCORES> saving_throws;
		std::vector<SKILLS> trained_skills;
	} proficiencies;
	
	int ability_scores[(int)ABILITY_SCORES::NUM_OF_ABILITY_SCORES];

	static const std::map<FEATS, int> FEAT_LEVEL_REQUIREMENTS;

protected:
	CLASSES class_ID;
	const std::map<ABILITIES, int>* abilities_map;

public:
	void SetCharacterName(std::string nm);
	void SetLevel(int lvl);
	void SetBackground(BACKGROUNDS bckground);
	void SetPlayerName(std::string nm);
	void SelectRace(RACES rc);
	void SelectAlignment(ALIGNMENTS algn);
	void SetExperiencePoints(int exp);
	void SetArmorClass(int ac);
	void SetInitiative(int init);
	void SetSpeed(int spd);
	void SetMaxHitpoints(int hp);
	void SetCurrentHitpoints(int hp);
	void SetTemporaryHitpoints(int hp);
	void AddToInventory(ITEMS itm, int quantity);
	void RemoveFromInventory(ITEMS, int quantity);
	bool HasItem(ITEMS itm);
	int QuantityOfItem(ITEMS itm);
	void SetMoneyAmount(int mny);
	void AddMoney(int mny);
	void SubtractMoney(int mny);
	bool SetAbilityScore(ABILITY_SCORES attr_id, int value);
	void AddToAbilityScore(ABILITY_SCORES attr_id, int value);
	void MarkSkillTrained(SKILLS skill_id);
	void UnmarkSkillTrained(SKILLS skill_id);
	bool AddAbility(ABILITIES ability_id);
	bool RemoveAbility(ABILITIES ability_id);
	bool HasAbility(ABILITIES ability_id);
	void MarkWeaponProficient(ITEMS itm_id);
	void UnmarkWeaponProficient(ITEMS itm_id);
	void MarkArmorProficient(ITEMS itm_id);
	void UnmarkArmorProficient(ITEMS itm_id);
	void MarkToolsProficient(ITEMS itm_id);
	void UnmarkToolsProficient(ITEMS itm_id);
	bool AddFeat(FEATS ability_id);
	bool RemoveFeat(FEATS ability_id);
	bool HasFeat(FEATS ability_id);
	void SetHitDice(int dice_type, int total);
	void SetDeathSaves(int death_save_id);
	void ResetDeathSaves();
	void SetAttire(ITEMS attire_id);
	void EquipToLeftHand(ITEMS itm);
	void EquipToRightHand(ITEMS itm);
	void RemoveFromLeftHand();
	void RemoveFromRightHand();
	void MarkSavingThrow(ABILITY_SCORES attr_id);
	void UnmarkSavingThrow(ABILITY_SCORES attr_id);
	bool AddLanguage(LANGUAGES language);
	bool RemoveLanguage(LANGUAGES language);
	bool AddLanguage(EXOTIC_LANGUAGES exotic_language);
	bool RemoveLanguage(EXOTIC_LANGUAGES exotic_language);
	bool SpeaksLanguage(LANGUAGES language);
	bool SpeaksLanguage(EXOTIC_LANGUAGES exotic_language);

	const std::string getCharacterName();
	const int getLevel();
	const BACKGROUNDS getBackground();
	const std::string getPlayerName();
	const RACES getRaceId();
	const CLASSES getClassId();
	const ITEMS getAttire();
	const std::string getAlignment();
	const int getExperiencePoints();
	const int getArmorClass();
	const int getInitiative();
	const int getSpeed();
	const int getMaxHitpoints();
	const int getCurrentHitpoints();
	const int getTemporaryHitpoints();
	const std::map<ITEMS, int>& getInventory();
	const int getAbilityScore(ABILITY_SCORES attr_id);
	const int getAbilityModifier(ABILITY_SCORES attr_id);
	const int getProficiencyBonus();
	const int getSavingThrowValue(ABILITY_SCORES attr_id);
	const int getSkillValue(SKILLS skill_id);
	const int getHitDiceType();
	const int getHitDiceTotal();
	const int getMoneyInCoper();
	const int getMoneyInSilver();
	const int getMoneyInElectrum();
	const int getMoneyInGold();
	const int getMoneyInPlatinum();
	const bool isProficientInSkill(SKILLS skill_id);
	const bool isProficientWithArmor(ITEMS itm_id);
	const bool isProficientWithWeapon(ITEMS itm_id);
	const bool isProficientWithTools(ITEMS itm_id);
	const bool isProficientWithSavingThrow(ABILITY_SCORES attr_id);

	virtual int ABILITY_LEVEL(ABILITIES ability) = 0;

	static bool isDwarf(Character* character);
	static void SelectEquipmentPack(Character* character, EQUIPMENT_PACKS equipment_pack_id);
};
