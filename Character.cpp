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

void Character::SetBackground(BACKGROUNDS bckground)
{
	background = bckground;
}

void Character::SetPlayerName(std::string nm)
{
	player_name = nm;
}

void Character::SelectRace(RACES rc)
{
	race = rc;
}

void Character::SelectAlignment(ALIGNMENTS algn)
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

void Character::AddToInventory(ITEMS itm, int quantity)
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

void Character::RemoveFromInventory(ITEMS itm, int quantity)
{
	if (inventory.find(itm) != inventory.end())
	{
		inventory[itm] -= quantity;

		if (inventory[itm] <= 0)
			inventory.erase(itm);
	}
}

bool Character::HasItem(ITEMS itm)
{
	if (inventory.find(itm) != inventory.end())
		return true;

	return false;
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

bool Character::SetAbilityScore(ABILITY_SCORES attr_id, int value)
{
	if (value > 20 || value < 3)
		return false;

	ability_scores[(int)attr_id] = value;
	return true;
}

void Character::AddToAbilityScore(ABILITY_SCORES attr_id, int value)
{
	ability_scores[(int)attr_id] += value;
}

void Character::MarkSkillTrained(SKILLS skill_id)
{
	if (!isProficientInSkill(skill_id))
	{
		proficiencies.trained_skills.push_back(skill_id);
	}
}

void Character::UnmarkSkillTrained(SKILLS skill_id)
{
	for (int i = 0; i < proficiencies.trained_skills.size(); i++)
	{
		if (proficiencies.trained_skills[i] == skill_id)
		{
			proficiencies.trained_skills.erase(proficiencies.trained_skills.begin() + i);
		}
	}
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

void Character::MarkWeaponProficient(ITEMS itm_id)
{
	if (!isProficientWithWeapon(itm_id))
	{
		proficiencies.weapons.push_back(itm_id);
	}
}

void Character::UnmarkWeaponProficient(ITEMS itm_id)
{
	for (int i = 0; i < proficiencies.weapons.size(); i++)
	{
		if (proficiencies.weapons[i] == itm_id)
		{
			proficiencies.weapons.erase(proficiencies.weapons.begin() + i);
		}
	}
}

void Character::MarkArmorProficient(ITEMS itm_id)
{
	if (!isProficientWithArmor(itm_id))
	{
		proficiencies.armor.push_back(itm_id);
	}
}

void Character::UnmarkArmorProficient(ITEMS itm_id)
{
	for (int i = 0; i < proficiencies.armor.size(); i++)
	{
		if (proficiencies.armor[i] == itm_id)
		{
			proficiencies.armor.erase(proficiencies.armor.begin() + i);
		}
	}
}

void Character::MarkToolsProficient(ITEMS itm_id)
{
	if (!isProficientWithTools(itm_id))
	{
		proficiencies.tools.push_back(itm_id);
	}
}

void Character::UnmarkToolsProficient(ITEMS itm_id)
{
	for (int i = 0; i < proficiencies.tools.size(); i++)
	{
		if (proficiencies.tools[i] == itm_id)
		{
			proficiencies.tools.erase(proficiencies.tools.begin() + i);
		}
	}
}

bool Character::AddFeat(FEATS feat_id)
{
	if ((int)feat_id < (int)FEATS::NUM_OF_FEATS && (int)feat_id > -1)
	{
		if (!HasFeat(feat_id))
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

void Character::SetHitDice(int dice_type, int total)
{
	if (dice_type < 0)
		dice_type = 0;

	if (total < 1)
		total = 1;

	hitDice.dice_type = dice_type;
	hitDice.total = total;
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

void Character::SetAttire(ITEMS attire_id)
{
	current_attire = attire_id;
}

void Character::MarkSavingThrow(ABILITY_SCORES attr_id)
{
	if (!isProficientWithSavingThrow(attr_id))
	{
		proficiencies.saving_throws.push_back(attr_id);
	}
}

void Character::UnmarkSavingThrow(ABILITY_SCORES attr_id)
{
	for (int i = 0; i < proficiencies.saving_throws.size(); i++)
	{
		if (proficiencies.saving_throws[i] == attr_id)
		{
			proficiencies.saving_throws.erase(proficiencies.saving_throws.begin() + i);
		}
	}
}

bool Character::AddLanguage(LANGUAGES language)
{
	if (!SpeaksLanguage(language))
	{
		language_list.push_back(language);
		return true;
	}

	return false;
}

bool Character::RemoveLanguage(LANGUAGES language)
{
	for (int i = 0; i < language_list.size(); i++)
	{
		if (language_list[i] == language)
		{
			language_list.erase(language_list.begin() + i);
			return true;
		}
	}

	return false;
}

bool Character::AddLanguage(EXOTIC_LANGUAGES exotic_language)
{
	if (!SpeaksLanguage(exotic_language))
	{
		exotic_language_list.push_back(exotic_language);
		return true;
	}

	return false;
}

bool Character::RemoveLanguage(EXOTIC_LANGUAGES exotic_language)
{
	for (int i = 0; i < exotic_language_list.size(); i++)
	{
		if (exotic_language_list[i] == exotic_language)
		{
			exotic_language_list.erase(exotic_language_list.begin() + i);
			return true;
		}
	}

	return false;
}

bool Character::SpeaksLanguage(LANGUAGES language)
{
	for (auto& lang : language_list)
	{
		if (lang == language)
			return true;
	}

	return false;
}

bool Character::SpeaksLanguage(EXOTIC_LANGUAGES exotic_language)
{
	for (auto& lang : exotic_language_list)
	{
		if (lang == exotic_language)
			return true;
	}

	return false;
}

const std::string Character::getCharacterName()
{
	return character_name;
}

const int Character::getLevel()
{
	return level;
}

const BACKGROUNDS Character::getBackground()
{
	return background;
}

const std::string Character::getPlayerName()
{
	return player_name;
}

const RACES Character::getRaceId()
{
	return race;
}

const CLASSES Character::getClassId()
{
	return class_ID;
}

const ITEMS Character::getAttire()
{
	return current_attire;
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

const std::map<ITEMS, int>& Character::getInventory()
{
	return inventory;
}

const int Character::getAbilityScore(ABILITY_SCORES attr_id)
{
	return ability_scores[(int)attr_id];
}

const int Character::getAbilityModifier(ABILITY_SCORES attr_id)
{
	int numerator = (ability_scores[(int)attr_id] - 10);
	if (numerator < 0 && numerator % 2 != 0)
		return (numerator / 2) - 1;

	return numerator / 2;
}

const int Character::getProficiencyBonus()
{
	return (2 + ((level - 1) / 4));
}

const int Character::getSavingThrowValue(ABILITY_SCORES attr_id)
{
	int mod = getAbilityModifier(attr_id);
	if (isProficientWithSavingThrow(attr_id))
	{
		return (mod + getProficiencyBonus());
	}

	return mod;
}

const int Character::getSkillValue(SKILLS skill_id)
{
	int mod_val = getAbilityModifier(GetSKillType(skill_id));

	if (isProficientInSkill(skill_id))
		return (mod_val + getProficiencyBonus());

	return mod_val;
}

const int Character::getHitDiceType()
{
	return hitDice.dice_type;
}

const int Character::getHitDiceTotal()
{
	return hitDice.total;
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

const bool Character::isProficientInSkill(SKILLS skill_id)
{
	for (auto& sk_id : proficiencies.trained_skills)
	{
		if (sk_id == skill_id)
			return true;
	}

	return false;
}

const bool Character::isProficientWithArmor(ITEMS itm_id)
{
	for (auto& itm : proficiencies.armor)
	{
		if (itm == itm_id)
			return true;
	}

	return false;
}

const bool Character::isProficientWithWeapon(ITEMS itm_id)
{
	for (auto& itm : proficiencies.weapons)
	{
		if (itm == itm_id)
			return true;
	}

	return false;
}

const bool Character::isProficientWithTools(ITEMS itm_id)
{
	for (auto& itm : proficiencies.tools)
	{
		if (itm == itm_id)
			return true;
	}

	return false;
}

const bool Character::isProficientWithSavingThrow(ABILITY_SCORES attr_id)
{
	for (auto& saveThrows : proficiencies.saving_throws)
	{
		if (saveThrows == attr_id)
			return true;
	}

	return false;
}

void Character::SelectEquipmentPack(Character* character, EQUIPMENT_PACKS equipment_pack_id)
{
	switch (equipment_pack_id)
	{
	case EQUIPMENT_PACKS::BURGLERS_PACK:
		BurglersPack(character);
		break;
	case EQUIPMENT_PACKS::DIPLOMATS_PACK:
		DiplomatsPack(character);
		break;
	case EQUIPMENT_PACKS::DUNGEONEERS_PACK:
		DungeoneersPack(character);
		break;
	case EQUIPMENT_PACKS::ENTERTAINERS_PACK:
		EntertainersPack(character);
		break;
	case EQUIPMENT_PACKS::EXPLORERS_PACK:
		ExploerersPack(character);
		break;
	case EQUIPMENT_PACKS::PRIESTS_PACK:
		PriestsPack(character);
		break;
	case EQUIPMENT_PACKS::SCHOLARS_PACK:
		ScholarsPack(character);
		break;
	}
}

bool Character::isDwarf(Character* character)
{
	if (character->getRaceId() == RACES::HILL_DWARF || character->getRaceId() == RACES::MOUNTAIN_DWARF)
		return true;

	return false;
}
