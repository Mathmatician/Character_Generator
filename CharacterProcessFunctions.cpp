#include "CharacterProcessFunctions.h"

void CharacterCreationProcess(CLASSES class_id, RACES race_id, BACKGROUNDS background_id, int level, std::string player_name)
{
	// Step 1: Select Class
	Character* character = SelectClass(class_id, race_id, background_id);

	// Step 2: Set level
	character->SetLevel(1);

	// Step 3: Set character name
	character->SetPlayerName(player_name);

	// Step 4: Select alightment
	character->SelectAlignment(ALIGNMENTS::NEUTRAL);

	// Step 5: Add gold
	RollForGold(character);

	// Step 6: Select trained skills by background
	SelectTrainedSkillsByBackground(character);

	// Step 7 Select trained skills by class
	SelectTrainedSkillsByClass(character);

	// Step 8: Roll for ability scores
	//    - roll 4 dice, drop the lowest, and add remaining 3
	RollAbilityScores(character);

	// Step 9: Add ability points by race
	AddAbilityPointsByRace(character);

	// Step 11: Select languages by background
	SelectLanguagesByBackground(character);

	// Step 12: Add Equipment by background
	AddEquipmentByBackground(character);

	// Step 13: Add Equipment By Class
	AddEquipmentByClass(character);

	// Step 14: Set speed
	SetCharacterSpeed(character);

	// Step 15: Set initiative
	character->SetInitiative(character->getAbilityModifier(ABILITY_SCORES::DEXTERITY));

	// Step 16: Level Up
	for (int i = 0; i < level; i++)
		LevelUp(character);

	DisplayCharacterStats(character);

	delete character;
}

void LevelUp(Character* character)
{
	int next_level = character->getLevel() + 1;
	character->SetLevel(next_level);

	if ((next_level % 4 == 0 || next_level == 19) && next_level != 20)
	{
		int selection = GenerateRandomNumber(0, 1);
		switch (selection)
		{
		case 0:
			AddAbilityPoints(character, 2);
			break;
		case 1:
			AddFeat(character);
			break;
		}
	}

	SetHitPoints(character);
}

Character* SelectClass(CLASSES class_id, RACES race_id, BACKGROUNDS background_id)
{
	switch (class_id)
	{
	case CLASSES::ARTIFICER:
		return (new Artificer(race_id, background_id));
		break;
	case CLASSES::BARBARIAN:
		return (new Barbarian(race_id, background_id));
		break;
	case CLASSES::BARD:
		return (new Bard(race_id, background_id));
		break;
	case CLASSES::CLERIC:
		return (new Cleric(race_id, background_id));
		break;
	case CLASSES::DRUID:
		return (new Druid(race_id, background_id));
		break;
	case CLASSES::FIGHTER:
		return (new Fighter(race_id, background_id));
		break;
	case CLASSES::MONK:
		return (new Monk(race_id, background_id));
		break;
	case CLASSES::PALADIN:
		return (new Paladin(race_id, background_id));
		break;
	case CLASSES::RANGER:
		return (new Ranger(race_id, background_id));
		break;
	case CLASSES::ROGUE:
		return (new Rogue(race_id, background_id));
		break;
	case CLASSES::SORCERER:
		return (new Sorcerer(race_id, background_id));
		break;
	case CLASSES::WARLOCK:
		return (new Warlock(race_id, background_id));
		break;
	case CLASSES::WIZARD:
		return (new Wizard(race_id, background_id));
		break;
	}

	return nullptr;
}

int RollDice(int dice)
{
	switch(dice)
	{
	case D4:
		return GenerateRandomNumber(1, 4);
		break;
	case D6:
		return GenerateRandomNumber(1, 6);
		break;
	case D8:
		return GenerateRandomNumber(1, 8);
		break;
	case D10:
		return GenerateRandomNumber(0, 9);
		break;
	case DP10:
		return 10 * GenerateRandomNumber(0, 9);
		break;
	case D12:
		return GenerateRandomNumber(1, 12);
		break;
	case D20:
		return GenerateRandomNumber(1, 20);
		break;
	}
}

int RollFourD6DropOne()
{
	int dice[4] = { RollDice(D6), RollDice(D6), RollDice(D6), RollDice(D6) };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (dice[j] < dice[j + 1])
				std::swap(dice[j], dice[j + 1]);
		}
	}

	return (dice[0] + dice[1] + dice[1]);
}

void RollAbilityScores(Character* character)
{
	int score_rolls[(int)ABILITY_SCORES::NUM_OF_ABILITY_SCORES + 1];
	int index_of_lowest = 0;
	for (int i = 0; i < (int)ABILITY_SCORES::NUM_OF_ABILITY_SCORES + 1; i++)
	{
		score_rolls[i] = RollFourD6DropOne();
		if (score_rolls[i] < score_rolls[index_of_lowest])
			index_of_lowest = i;
	}
	score_rolls[index_of_lowest] = -1;

	std::vector<int> selected_scores;
	for (int i = 0; i < (int)ABILITY_SCORES::NUM_OF_ABILITY_SCORES + 1; i++)
	{
		if (score_rolls[i] != -1)
			selected_scores.push_back(score_rolls[i]);
	}

	if (selected_scores.size() == (int)ABILITY_SCORES::NUM_OF_ABILITY_SCORES)
	{
		for (int i = 0; i < (int)ABILITY_SCORES::NUM_OF_ABILITY_SCORES; i++)
		{
			character->SetAbilityScore((ABILITY_SCORES)i, selected_scores[i]);
		}
	}
}

void RollForGold(Character* character)
{
	switch (character->getClassId())
	{
	case CLASSES::ARTIFICER:
		break;
	case CLASSES::BARBARIAN:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::BARD:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::CLERIC:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::DRUID:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::FIGHTER:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::MONK:
		character->SetMoneyAmount(GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::PALADIN:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::RANGER:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::ROGUE:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::SORCERER:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::WARLOCK:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	case CLASSES::WIZARD:
		character->SetMoneyAmount(10 * GOLD * (RollDice(D4) + RollDice(D4) + RollDice(D4) + RollDice(D4)));
		break;
	}
}

void AddAbilityPoints(Character* character, int points)
{
	while (points > 0)
	{
		ABILITY_SCORES random_ability_score = ABILITY_SCORES::NOTHING;
		switch (character->getClassId())
		{
		case CLASSES::ARTIFICER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&artificer_ability_score_preference);
			break;
		case CLASSES::BARBARIAN:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&barbarian_ability_score_preference);
			break;
		case CLASSES::BARD:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&bard_ability_score_preference);
			break;
		case CLASSES::CLERIC:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&cleric_ability_score_preference);
			break;
		case CLASSES::DRUID:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&druid_ability_score_preference);
			break;
		case CLASSES::FIGHTER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&fighter_ability_score_preference);
			break;
		case CLASSES::MONK:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&monk_ability_score_preference);
			break;
		case CLASSES::PALADIN:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&paladin_ability_score_preference);
			break;
		case CLASSES::RANGER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&ranger_ability_score_preference);
			break;
		case CLASSES::ROGUE:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&rogue_ability_score_preference);
			break;
		case CLASSES::SORCERER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&sorcerer_ability_score_preference);
			break;
		case CLASSES::WARLOCK:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&warlock_ability_score_preference);
			break;
		case CLASSES::WIZARD:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&wizard_ability_score_preference);
			break;
		}

		if ((ABILITY_SCORES)random_ability_score != ABILITY_SCORES::NOTHING && character->getAbilityScore((ABILITY_SCORES)random_ability_score) < 20)
		{
			character->AddToAbilityScore((ABILITY_SCORES)random_ability_score, 1);
			points--;
		}
	}
}

void AddFeat(Character* character)
{
	int feat_selection = GenerateRandomNumber(0, ((int)FEATS::NUM_OF_FEATS) - 1);
	int count = 0;

	while (character->HasFeat((FEATS)feat_selection))
	{
		feat_selection = GenerateRandomNumber(0, ((int)FEATS::NUM_OF_FEATS) - 1);
		count++;

		if (count >= 10000)
			break;
	}

	if (!character->HasFeat((FEATS)feat_selection))
		character->AddFeat((FEATS)feat_selection);
}

void AddProficiencyByBackground(Character* character)
{
	switch (character->getBackground())
	{
	case BACKGROUNDS::ACOLYTE:
		break;
	}
}

void AddAbilityPointsByRace(Character* character)
{
	switch (character->getRaceId())
	{
	case RACES::HILL_DWARF:
		character->AddToAbilityScore(ABILITY_SCORES::CONSTITUTION, 2);
		character->AddToAbilityScore(ABILITY_SCORES::WISDOM, 1);
		break;
	case RACES::MOUNTAIN_DWARF:
		character->AddToAbilityScore(ABILITY_SCORES::CONSTITUTION, 2);
		character->AddToAbilityScore(ABILITY_SCORES::STRENGTH, 2);
		break;
	case RACES::ELF:
		character->AddToAbilityScore(ABILITY_SCORES::INTELLIGENCE, 2);
		break;
	case RACES::HALFLING:
		character->AddToAbilityScore(ABILITY_SCORES::DEXTERITY, 2);
		break;
	case RACES::HUMAN:
		break;
	case RACES::DRAGONBORN:
		break;
	case RACES::GNOME:
		break;
	case RACES::HALF_ELF:
		break;
	case RACES::HALF_ORC:
		character->AddToAbilityScore(ABILITY_SCORES::STRENGTH, 2);
		break;
	case RACES::TIEFLING:
		break;
	}
}

void SetCharacterSpeed(Character* character)
{
	switch (character->getRaceId())
	{
	case RACES::HILL_DWARF:
		character->SetSpeed(25);
		break;
	case RACES::MOUNTAIN_DWARF:
		character->SetSpeed(25);
		break;
	case RACES::ELF:
		character->SetSpeed(30);
		break;
	case RACES::HALFLING:
		character->SetSpeed(25);
		break;
	case RACES::HUMAN:
		character->SetSpeed(30);
		break;
	case RACES::DRAGONBORN:
		character->SetSpeed(30);
		break;
	case RACES::GNOME:
		character->SetSpeed(25);
		break;
	case RACES::HALF_ELF:
		character->SetSpeed(30);
		break;
	case RACES::HALF_ORC:
		character->SetSpeed(30);
		break;
	case RACES::TIEFLING:
		character->SetSpeed(30);
		break;
	}
}

void SelectTrainedSkillsByBackground(Character* character)
{
	switch (character->getBackground())
	{
	case BACKGROUNDS::ACOLYTE:
		character->MarkSkillTrained(SKILLS::INSIGHT);
		character->MarkSkillTrained(SKILLS::RELIGION);
		break;
	}
}

void SelectTrainedSkillsByClass(Character* character)
{
	switch (character->getClassId())
	{
	case CLASSES::ARTIFICER:
		break;
	case CLASSES::BARBARIAN:
		Barbarian::SkillOptions(character, 2);
		break;
	case CLASSES::BARD:
		Bard::SkillOptions(character, 3);
		break;
	case CLASSES::CLERIC:
		Cleric::SkillOptions(character, 2);
		break;
	case CLASSES::DRUID:
		Druid::SkillOptions(character, 2);
		break;
	case CLASSES::FIGHTER:
		Fighter::SkillOptions(character, 2);
		break;
	case CLASSES::MONK:
		Monk::SkillOptions(character, 2);
		break;
	case CLASSES::PALADIN:
		Paladin::SkillOptions(character, 2);
		break;
	case CLASSES::RANGER:
		Ranger::SkillOptions(character, 2);
		break;
	case CLASSES::ROGUE:
		Rogue::SkillOptions(character, 2);
		break;
	case CLASSES::SORCERER:
		Sorcerer::SkillOptions(character, 2);
		break;
	case CLASSES::WARLOCK:
		Warlock::SkillOptions(character, 2);
		break;
	case CLASSES::WIZARD:
		Wizard::SkillOptions(character, 2);
		break;
	}
}

void AddEquipmentByBackground(Character* character)
{
	switch (character->getBackground())
	{
	case BACKGROUNDS::ACOLYTE:
		AcolyteEquipmentSelection(character);
		break;
	}
}

void AddEquipmentByClass(Character* character)
{
	switch (character->getClassId())
	{
	case CLASSES::ARTIFICER:
		break;
	case CLASSES::BARBARIAN:
		Barbarian::EquipmentSelection(character);
		Barbarian::EquipItems(character);
		break;
	case CLASSES::BARD:
		Bard::EquipmentSelection(character);
		Bard::EquipItems(character);
		break;
	case CLASSES::CLERIC:
		Cleric::EquipmentSelection(character);
		Cleric::EquipItems(character);
		break;
	case CLASSES::DRUID:
		Druid::EquipmentSelection(character);
		Druid::EquipItems(character);
		break;
	case CLASSES::FIGHTER:
		Fighter::EquipmentSelection(character);
		Fighter::EquipItems(character);
		break;
	case CLASSES::MONK:
		Monk::EquipmentSelection(character);
		Monk::EquipItems(character);
		break;
	case CLASSES::PALADIN:
		Paladin::EquipmentSelection(character);
		Paladin::EquipItems(character);
		break;
	case CLASSES::RANGER:
		Ranger::EquipmentSelection(character);
		Ranger::EquipItems(character);
		break;
	case CLASSES::ROGUE:
		Rogue::EquipmentSelection(character);
		Rogue::EquipItems(character);
		break;
	case CLASSES::SORCERER:
		Sorcerer::EquipmentSelection(character);
		Sorcerer::EquipItems(character);
		break;
	case CLASSES::WARLOCK:
		Warlock::EquipmentSelection(character);
		Warlock::EquipItems(character);
		break;
	case CLASSES::WIZARD:
		Wizard::EquipmentSelection(character);
		Wizard::EquipItems(character);
		break;
	}
}

int LevelValidator(int level)
{
	if (level < 1)
		level = 1;
	else if (level > MAX_LEVEL)
		level = MAX_LEVEL;

	return level;
}

void SelectLanguagesByBackground(Character* character)
{
	switch (character->getBackground())
	{
	case BACKGROUNDS::ACOLYTE:
		SelectNumOfLanguages(character, 2, 0);
			break;
	}
}

void SelectLanguagesByRace(Character* character)
{

}

void SelectNumOfLanguages(Character* character, int num_of_standard, int num_of_exotic)
{
	int time_lapse = 1000;
	while (num_of_standard > 0 && time_lapse > 0)
	{
		LANGUAGES selection = (LANGUAGES)GenerateRandomNumber(1, (int)LANGUAGES::NUM_OF_LANGUAGES);
		if (!character->SpeaksLanguage(selection))
		{
			character->AddLanguage(selection);
			num_of_standard--;
		}

		time_lapse--;
	}

	time_lapse = 1000;
	while (num_of_exotic > 0 && time_lapse > 0)
	{
		EXOTIC_LANGUAGES selection = (EXOTIC_LANGUAGES)GenerateRandomNumber(0, (int)EXOTIC_LANGUAGES::NUM_OF_EXOTIC_LANGUAGES);
		if (!character->SpeaksLanguage(selection))
		{
			character->AddLanguage(selection);
			num_of_standard--;
		}

		time_lapse--;
	}
}

ABILITY_SCORES SelectRandomAbilityScoreWithWeight()
{
	return SelectRandomAbilityScoreWithWeight(&equal_ability_score_preference);
}

ABILITY_SCORES SelectRandomAbilityScoreWithWeight(ABILITY_SCORE_PREFERENCE* absp)
{
	int strength = absp->getStrength();
	int dexterity = absp->getDexterity();
	int constitution = absp->getConstitution();
	int intelligence = absp->getIntelligence();
	int wisdom = absp->getWisdom();
	int charisma = absp->getCharisma();

	float total = strength + dexterity + constitution + intelligence + wisdom + charisma;

	if (total <= 0)
	{
		strength = 1;
		dexterity = 1;
		constitution = 1;
		intelligence = 1;
		wisdom = 1;
		charisma = 1;
		total = strength + dexterity + constitution + intelligence + wisdom + charisma;
	}

	float strength_ratio = (((float)strength) * 100) / total;
	float dexterity_ratio = (((float)dexterity) * 100) / total;
	float constitution_ratio = (((float)constitution) * 100) / total;
	float intelligence_ratio = (((float)intelligence) * 100) / total;
	float wisdom_ratio = (((float)wisdom) * 100) / total;
	float charisma_ratio = (((float)charisma) * 100) / total;

	int rand_num = GenerateRandomNumber(1, 100);

	if (rand_num < strength_ratio)
		return ABILITY_SCORES::STRENGTH;

	if (rand_num < strength_ratio + dexterity_ratio)
		return ABILITY_SCORES::DEXTERITY;

	if (rand_num < strength_ratio + dexterity_ratio + constitution_ratio)
		return ABILITY_SCORES::CONSTITUTION;

	if (rand_num < strength_ratio + dexterity_ratio + constitution_ratio + intelligence_ratio)
		return ABILITY_SCORES::INTELLIGENCE;

	if (rand_num < strength_ratio + dexterity_ratio + constitution_ratio + intelligence_ratio + wisdom_ratio)
		return ABILITY_SCORES::WISDOM;

	return ABILITY_SCORES::CHARISMA;
}

void SetHitPoints(Character* character)
{
	int dice_res = RollDice(character->getHitDiceType());

	if (dice_res == 0)
		dice_res = 10;

	int hp = dice_res + character->getAbilityModifier(ABILITY_SCORES::CONSTITUTION) + character->getMaxHitpoints();
	character->SetMaxHitpoints(hp);
	character->SetCurrentHitpoints(hp);
}

void DisplayWeaponsStats(Character* character)
{
	std::vector<ITEMS> all_weapons;
	std::map<ITEMS, int> inventory = character->getInventory();

	for (auto& item : inventory)
	{
		if (isWeapon(item.first))
			all_weapons.push_back(item.first);
	}

	for (auto& item : all_weapons)
	{
		WEAPON_INFO weapon = getWeaponInfo(item);
		int fin_atk_bonus = character->getAbilityModifier(ABILITY_SCORES::DEXTERITY);
		int str_atk_bonus = character->getAbilityModifier(ABILITY_SCORES::STRENGTH);
		int selected_atk_bonus;

		if (weapon.hasProperty(WEAPON_PROPERTIES::FINESSE) && fin_atk_bonus > str_atk_bonus)
		{
			selected_atk_bonus = fin_atk_bonus;
			if (character->isProficientWithSavingThrow(ABILITY_SCORES::DEXTERITY))
				selected_atk_bonus += character->getProficiencyBonus();
		}
		else
		{
			selected_atk_bonus = str_atk_bonus;
			if (character->isProficientWithSavingThrow(ABILITY_SCORES::STRENGTH))
				selected_atk_bonus += character->getProficiencyBonus();
		}

		std::cout << getWeaponString(item) << "\t" << selected_atk_bonus << "\t" << weapon.getDiceStringInfo() << std::endl;
	}
}

void DisplayCharacterStats(Character* character)
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << " Character Name:      " << character->getPlayerName() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl << std::endl;

	std::cout << "----------------------------------" << std::endl;
	std::cout << "| Abilities Scores and Modifiers |" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Type:\t\t\t" << "Score:" << "\t\t" << "Modifier:" << std::endl << std::endl;
	for (int i = 0; i < (int)ABILITY_SCORES::NUM_OF_ABILITY_SCORES; i++)
	{
		std::string num_of_tabs = "\t";
		if (i != (int)ABILITY_SCORES::CONSTITUTION && i != (int)ABILITY_SCORES::INTELLIGENCE)
			num_of_tabs += "\t";

		std::string str = GetAbilityScoreText((ABILITY_SCORES)i) + "(" + std::to_string(i) + "):" + num_of_tabs;
		std::cout << str << character->getAbilityScore((ABILITY_SCORES)i) << "\t\t" << character->getAbilityModifier((ABILITY_SCORES)i) << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Proficiency Bonus: " << character->getProficiencyBonus() << std::endl;
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "---------------------" << std::endl;
	std::cout << "| Skills Trained in | " << std::endl;
	std::cout << "---------------------" << std::endl;
	for (int i = 0; i < (int)SKILLS::NUM_OF_SKILLS; i++)
	{
		if (character->isProficientInSkill((SKILLS)i))
			std::cout << " - " << GetSkillText((SKILLS)i) << std::endl;
	}

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "--------------" << std::endl;
	std::cout << "| Skill List |" << std::endl;
	std::cout << "--------------" << std::endl;
	for (int i = 0; i < (int)SKILLS::NUM_OF_SKILLS; i++)
	{
		std::string num_of_tabs = "\t";

		if (i != (int)SKILLS::ANIMAL_HANDLING && i != (int)SKILLS::INTIMIDATION && i != (int)SKILLS::INVESTIGATION && i != (int)SKILLS::SLEIGHT_OF_HAND)
			num_of_tabs += "\t";

		std::cout << GetSkillText((SKILLS)i) << "(" << (int)GetSKillType((SKILLS)i) << "):" << num_of_tabs << character->getSkillValue((SKILLS)i) << std::endl;
	}

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	std::cout << "| Armor Class, Initiative, and Speed |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "Armor Class:\t" << character->getArmorClass() << std::endl;
	std::cout << "Initiative:\t" << character->getInitiative() << std::endl;
	std::cout << "Speed:\t" << character->getSpeed() << std::endl;

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "--------------" << std::endl;
	std::cout << "| Hit Points |" << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "Hit Point Maximum:\t" << character->getMaxHitpoints() << std::endl;
	std::cout << "Current Hit Points:\t" << character->getCurrentHitpoints() << std::endl;
	std::cout << "Temporary Hit Points:\t" << character->getTemporaryHitpoints() << std::endl;

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "| Hit Dice |" << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "Hit dice:\t" << character->getHitDiceType() << std::endl;
	std::cout << "Total:\t\t" << character->getHitDiceTotal() << std::endl;

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "---------------------------" << std::endl;
	std::cout << "| Attack and Spellcasting |" << std::endl;
	std::cout << "---------------------------" << std::endl;
	DisplayWeaponsStats(character);

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "-------------" << std::endl;
	std::cout << "| Equipment |" << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << "Money:" << std::endl;
	std::cout << " - In Copper (cp): " << character->getMoneyInCoper() << std::endl;
	std::cout << " - In Silver (sp): " << character->getMoneyInSilver() << std::endl;
	std::cout << " - In Electrum (ep): " << character->getMoneyInElectrum() << std::endl;
	std::cout << " - In Gold (gp): " << character->getMoneyInGold() << std::endl;
	std::cout << " - In Platinum (pp): " << character->getMoneyInPlatinum() << std::endl;
}

void AcolyteEquipmentSelection(Character* character)
{
	character->AddToInventory(ITEMS::HOLY_SYMBOL, 1);
	
	int selection = GenerateRandomNumber(0, 1);
	switch (selection)
	{
	case 0:
		character->AddToInventory(ITEMS::PRAYER_BOOK, 1);
		break;
	case 1:
		character->AddToInventory(ITEMS::PRAYER_WHEEL, 1);
		break;
	}

	character->AddToInventory(ITEMS::STICKS_OF_INCENSE, 5);
	character->AddToInventory(ITEMS::VESTMENTS, 1);
	character->AddToInventory(ITEMS::COMMON_CLOTHES, 1);
	character->AddToInventory(ITEMS::BELT_POUCH, 1);
	character->AddMoney(15 * GOLD);
}