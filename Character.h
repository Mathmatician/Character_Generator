#pragma once
#include <string>
#include <vector>

#include "definitions.h"
#include "Ability_Definitions.h"

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

	std::map<std::string, int> inventory;
	std::vector<ABILITIES> ability_list;
	std::vector<FEATS> feat_list;

	struct DeathSaves {
		int successes = 0;
		int failures = 0;
	} deathSaves;


	int skills[NUM_OF_SKILLS];
	int attributes[NUM_OF_ATTRIBUTES];

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
	void AddToInventory(std::string itm);
	void RemoveFromInventory(std::string itm);
	void SetAttribute(int attr_id, int value);
	void SetSkill(int skill_id, int value);
	bool AddAbility(ABILITIES ability_id);
	bool RemoveAbility(ABILITIES ability_id);
	bool HasAbility(ABILITIES ability_id);
	bool AddFeat(FEATS ability_id);
	bool RemoveFeat(FEATS ability_id);
	bool HasFeat(FEATS ability_id);
	void SetDeathSaves(int death_save_id);
	void ResetDeathSaves();

	const std::string getCharacterName();
	const int getLevel();
	const std::string getBackground();
	const std::string getPlayerName();
	const std::string getRace();
	const std::string getAlignment();
	const int getExperiencePoints();
	const int getArmorClass();
	const int getInitiative();
	const int getSpeed();
	const int getMaxHitpoints();
	const int getCurrentHitpoints();
	const int getTemporaryHitpoints();
	const std::map<std::string, int>& getInventory();
	const int getAttributeValue(int attr_id);
	const int getAttributeModifier(int attr_id);
	const int getSkillValue(int skill_id);

	static int FEAT_LEVELS(FEATS feat_id);
};