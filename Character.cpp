#include "Character.h"

void Character::SetCharacterName(std::string nm)
{
	character_name = nm;
}

void Character::SetLevel(int lvl)
{
	level = lvl;

	int i = 0;
	while (i < ability_list.size())
	{
		int lvl_req = abilities_map->at(ability_list[i]);

		if (level < lvl_req)
			ability_list.erase(ability_list.begin() + i);
		else
			i++;
	}
}

void Character::SetBackground(int bckground)
{
	background = bckground;
}

void Character::SetPlayerName(std::string nm)
{
	player_name = nm;
}

void Character::SelectRace(int rc)
{
	race = rc;
}

void Character::SelectAlignment(int algn)
{
	alignment = algn;
}

void Character::SetExperiencePoints(int exp)
{
	experience_points = exp;
}

void Character::SetArmorClass(int ac)
{
	armor_class = ac;
}

void Character::SetInitiative(int init)
{
	initiative = init;
}

void Character::SetSpeed(int spd)
{
	speed = spd;
}

void Character::SetMaxHitpoints(int hp)
{
	max_hitpoints = hp;
}

void Character::SetCurrentHitpoints(int hp)
{
	current_hitpoints = hp;
}

void Character::SetTemporaryHitpoints(int hp)
{
	temporary_hitpoints = hp;
}

void Character::AddToInventory(std::string itm)
{
	if (inventory.find(itm) == inventory.end())
	{
		inventory[itm] = 1;
	}
	else
	{
		if (inventory[itm] <= 0)
			inventory[itm] = 1;

		inventory[itm]++;
	}
}

void Character::RemoveFromInventory(std::string itm)
{
	if (inventory.find(itm) != inventory.end())
	{
		inventory[itm]--;

		if (inventory[itm] <= 0)
			inventory.erase(itm);
	}
}

void Character::SetAttribute(int attr_id, int value)
{
	attributes[attr_id] = value;
}

void Character::SetSkill(int skill_id, int value)
{
	skills[skill_id] = value;
}

bool Character::AddAbility(ABILITIES ability_id)
{
	if ((int)ability_id < (int)ABILITIES::NUM_OF_ABILITIES && (int)ability_id > -1)
	{
		int lvl_req = abilities_map->at(ability_id);

		if (level >= lvl_req)
		{
			ability_list.push_back(ability_id);
			return true;
		}
	}

	return false;
}

bool Character::RemoveAbility(ABILITIES ability_id)
{
	for (int i = 0; i < ability_list.size(); i++)
	{
		if (ability_list[i] == ability_id)
		{
			ability_list.erase(ability_list.begin() + i);
			return true;
		}
	}

	return false;
}

bool Character::HasAbility(ABILITIES ability_id)
{
	for (auto& abl : ability_list)
	{
		if (abl == ability_id)
			return true;
	}

	return false;
}

bool Character::AddFeat(FEATS feat_id)
{
	if ((int)feat_id < (int)FEATS::NUM_OF_FEATS && (int)feat_id > -1)
	{
		int lvl_req = FEAT_LEVEL_REQUIREMENTS.at(feat_id);

		if (level >= lvl_req)
		{
			feat_list.push_back(feat_id);
			return true;
		}
	}

	return false;
}

bool Character::RemoveFeat(FEATS feat_id)
{
	for (int i = 0; i < feat_list.size(); i++)
	{
		if (feat_list[i] == feat_id)
		{
			feat_list.erase(feat_list.begin() + i);
			return true;
		}
	}

	return false;
}

bool Character::HasFeat(FEATS feat_id)
{
	for (auto& f : feat_list)
	{
		if (f == feat_id)
			return true;
	}

	return false;
}

void Character::SetDeathSaves(int death_save_id)
{
	switch (death_save_id)
	{
	case SUCCESS:
		deathSaves.successes++;
		break;
	case FAILURE:
		deathSaves.failures++;
		break;
	}
}

void Character::ResetDeathSaves()
{
	deathSaves.successes = 0;
	deathSaves.failures = 0;
}

const std::string Character::getCharacterName()
{
	return character_name;
}

const int Character::getLevel()
{
	return level;
}

const std::string Character::getBackground()
{
	return GetBackgroundText(background);
}

const std::string Character::getPlayerName()
{
	return player_name;
}

const std::string Character::getRace()
{
	return GetRaceText(race);
}

const std::string Character::getAlignment()
{
	return GetAlignmentText(alignment);
}

const int Character::getExperiencePoints()
{
	return experience_points;
}

const int Character::getArmorClass()
{
	return armor_class;
}

const int Character::getInitiative()
{
	return initiative;
}

const int Character::getSpeed()
{
	return speed;
}

const int Character::getMaxHitpoints()
{
	return max_hitpoints;
}

const int Character::getCurrentHitpoints()
{
	return current_hitpoints;
}

const int Character::getTemporaryHitpoints()
{
	return temporary_hitpoints;
}

const std::map<std::string, int>& Character::getInventory()
{
	return inventory;
}

const int Character::getAttributeValue(int attr_id)
{
	return attributes[attr_id];
}

const int Character::getAttributeModifier(int attr_id)
{
	return (attributes[attr_id] - 10) / 2;
}

const int Character::getSkillValue(int skill_id)
{
	return skills[skill_id];
}

int Character::FEAT_LEVELS(FEATS feat_id)
{
	return FEAT_LEVEL_REQUIREMENTS.at(feat_id);
}