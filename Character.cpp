#include "Character.h"
#include "Equipment_Pack_Functions.h"

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

void Character::AddToInventory(int itm, int quantity)
{
	if (inventory.find(itm) == inventory.end())
	{
		inventory[itm] = quantity;
	}
	else
	{
		if (inventory[itm] <= 0)
			inventory[itm] = 1;

		inventory[itm] += quantity;
	}
}

void Character::RemoveFromInventory(int itm, int quantity)
{
	if (inventory.find(itm) != inventory.end())
	{
		inventory[itm] -= quantity;

		if (inventory[itm] <= 0)
			inventory.erase(itm);
	}
}

void Character::SetMoneyAmount(int mny)
{
	copper = mny;
}

void Character::AddMoney(int mny)
{
	copper += mny;
}

void Character::SubtractMoney(int mny)
{
	copper -= mny;
}

void Character::SetAbilityScore(int attr_id, int value)
{
	ability_scores[attr_id] = value;
}

void Character::AddToAbilityScore(int attr_id, int value)
{
	ability_scores[attr_id] += value;
}

void Character::SetSkill(int skill_id, int value, int trained)
{
	skills[skill_id].value = value;
	skills[skill_id].trained = trained;
}

void Character::SetSkillValue(int skill_id, int value)
{
	skills[skill_id].value = value;
}

void Character::MarkSkillTrained(int skill_id, int trained)
{
	skills[skill_id].trained = trained;
}

bool Character::AddAbility(ABILITIES ability_id)
{
	if ((int)ability_id < (int)ABILITIES::NUM_OF_ABILITIES && (int)ability_id > -1)
	{
		int lvl_req = -1;

		if (abilities_map->find(ability_id) != abilities_map->end())
		{
			lvl_req = abilities_map->at(ability_id);
		}

		if (level >= lvl_req && lvl_req != -1)
		{
			for (auto& ab_id : ability_list)
			{
				if (ab_id == ability_id)
					return false;
			}

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
			for (auto& ft_id : feat_list)
			{
				if (ft_id == feat_id)
					return false;
			}

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

void Character::SetAllSkillsByAbilityModifiers()
{
	for (int i = 0; i < NUM_OF_SKILLS; i++)
	{
		int skill_type = GetSKillType(i);
		int ability_modifier = getAbilityModifier(skill_type);
		skills[i].value = ability_modifier;

		if (skills[i].trained == 1)
		{
			skills[i].value += getProficiencyBonus();
		}
	}
}

const std::string Character::getCharacterName()
{
	return character_name;
}

const int Character::getLevel()
{
	return level;
}

const int Character::getBackground()
{
	return background;
}

const std::string Character::getPlayerName()
{
	return player_name;
}

const int Character::getRaceId()
{
	return race;
}

const int Character::getClassId()
{
	return class_ID;
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

const std::map<int, int>& Character::getInventory()
{
	return inventory;
}

const int Character::getAbilityScore(int attr_id)
{
	return ability_scores[attr_id];
}

const int Character::getAbilityModifier(int attr_id)
{
	return (ability_scores[attr_id] - 10) / 2;
}

const int Character::getProficiencyBonus()
{
	return (2 + ((level - 1) / 4));
}

const int Character::getSkillValue(int skill_id)
{
	return skills[skill_id].value;
}

const int Character::getMoneyInCoper()
{
	return copper;
}

const int Character::getMoneyInSilver()
{
	return copper / SILVER;
}

const int Character::getMoneyInElectrum()
{
	return copper / ELECTRUM;
}

const int Character::getMoneyInGold()
{
	return copper / GOLD;
}

const int Character::getMoneyInPlatinum()
{
	return copper / PLATINUM;
}

const bool Character::isTrainedInSkill(int skill_id)
{
	return skills[skill_id].trained == 1;
}

int Character::FEAT_LEVELS(FEATS feat_id)
{
	return FEAT_LEVEL_REQUIREMENTS.at(feat_id);
}

void Character::SelectEquipmentPack(Character* character, int equipment_pack_id)
{
	switch (equipment_pack_id)
	{
	case BURGLERS_PACK:
		BurglersPack(character);
		break;
	case DIPLOMATS_PACK:
		DiplomatsPack(character);
		break;
	case DUNGEONEERS_PACK:
		DungeoneersPack(character);
		break;
	case ENTERTAINERS_PACK:
		EntertainersPack(character);
		break;
	case EXPLORERS_PACK:
		ExploerersPack(character);
		break;
	case PRIESTS_PACK:
		PriestsPack(character);
		break;
	case SCHOLARS_PACK:
		ScholarsPack(character);
		break;
	}
}