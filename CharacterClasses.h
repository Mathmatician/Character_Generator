#pragma once

#include "Artificer.h"
#include "Barbarian.h"
#include "Bard.h"
#include "Cleric.h"
#include "Druid.h"
#include "Fighter.h"
#include "Monk.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Rogue.h"
#include "Sorcerer.h"
#include "Warlock.h"
#include "Wizard.h"

const std::map<FEATS, int> Character::FEAT_LEVEL_REQUIREMENTS = {
	{FEATS::LINGUIST, 1}
};

const std::map<ABILITIES, int> Artificer::ARTIFICER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Barbarian::BARBARIAN_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Bard::BARD_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Cleric::CLERIC_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Druid::DRUID_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Fighter::FIGHTER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Monk::MONK_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Paladin::PALADIN_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Ranger::RANGER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Rogue::ROGUE_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Sorcerer::SORCERER_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Warlock::WARLOCK_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};

const std::map<ABILITIES, int> Wizard::WIZARD_ABILITY_LEVELS = {
	{ABILITIES::SECOND_WIND, 3}
};