#include <iostream>
#include <vector>

#include "CharacterClasses.h"

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

int main()
{
	//CharacterCreationProcess(BARBARIAN, ORC, HIGHLANDER, LevelValidator(1), "Jeromash");

	return 0;
}

void CharacterCreationProcess(int class_id, int race_id, int background_id, int level, std::string player_name)
{
	// Step 1: Choose Class
	Character* character = SelectClass(class_id);

	// Step 2: Choose Race
	character->SelectRace(race_id);

	// Step 3: Set background
	character->SetBackground(background_id);

	// Step 4: Set level
	character->SetLevel(level);

	// Step 5: Set character name
	character->SetPlayerName(player_name);

	// Step 6: Select alightment
	character->SelectAlignment(NEUTRAL);

	// Step 7: Add gold
	RollForGold(character);

	// Step 8: Select trained skills by background
	SelectTrainedSkillsByBackground(character);

	// Step 9: Randomly select trained skills by class
	SelectTrainedSkillsByClass(character);

	// Step 10: Roll for ability scores
	//    - roll 4 dice, drop the lowest, and add remaining 3
	RollAbilityScores(character);

	// Step 11: Add ability points by race
	AddAbilityPointsByRace(character);

	// Step 12: Add ability points by level
	AddAbilityPointsByLevel(character);

	// Step 13: Add ability modifiers to all skills by governing ability (skill type). Proficiency is accounted when this function is called
	character->SetAllSkillsByAbilityModifiers();

	// Step 14: Add Equipment by background

	DisplayCharacterStats(character);

	delete character;
}

Character* SelectClass(int class_id)
{
	switch (class_id)
	{
	case ARTIFICER:
		return (new Artificer());
		break;
	case BARBARIAN:
		return (new Barbarian());
		break;
	case BARD:
		return (new Bard());
		break;
	case CLERIC:
		return (new Cleric());
		break;
	case DRUID:
		return (new Druid());
		break;
	case FIGHTER:
		return (new Fighter());
		break;
	case MONK:
		return (new Monk());
		break;
	case PALADIN:
		return (new Paladin());
		break;
	case RANGER:
		return (new Ranger());
		break;
	case ROGUE:
		return (new Rogue());
		break;
	case SORCERER:
		return (new Sorcerer());
		break;
	case WARLOCK:
		return (new Warlock());
		break;
	case WIZARD:
		return (new Wizard());
		break;
	}

	return nullptr;
}

int RollD6()
{
	return GenerateRandomNumber(1, 6);
}

int RollD4()
{
	return GenerateRandomNumber(1, 4);
}

int RollFourD6DropOne()
{
	int dice[4] = { RollD6(), RollD6(), RollD6(), RollD6() };
	
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
	character->SetAbilityScore(STRENGTH, RollFourD6DropOne());
	character->SetAbilityScore(DEXTERITY, RollFourD6DropOne());
	character->SetAbilityScore(CONSTITUTION, RollFourD6DropOne());
	character->SetAbilityScore(INTELLIGENCE, RollFourD6DropOne());
	character->SetAbilityScore(WISDOM, RollFourD6DropOne());
	character->SetAbilityScore(CHARISMA, RollFourD6DropOne());
}

void RollForGold(Character* character)
{
	switch (character->getClassId())
	{
	case ARTIFICER:
		break;
	case BARBARIAN:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4()));
		break;
	case BARD:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case CLERIC:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case DRUID:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4()));
		break;
	case FIGHTER:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case MONK:
		character->SetMoneyAmount(GOLD * (RollD4() + RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case PALADIN:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case RANGER:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case ROGUE:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case SORCERER:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4()));
		break;
	case WARLOCK:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	case WIZARD:
		character->SetMoneyAmount(10 * GOLD * (RollD4() + RollD4() + RollD4() + RollD4()));
		break;
	}
}

void AddAbilityPointsByLevel(Character* character)
{
	int ability_points = character->getLevel() / 4;

	if (character->getLevel() == 19)
		ability_points++;

	while (ability_points > 0)
	{
		int random_ability_score= -1;
		switch (character->getClassId())
		{
		case ARTIFICER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&artificer_ability_score_preference);
			break;
		case BARBARIAN:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&barbarian_ability_score_preference);
			break;
		case BARD:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&bard_ability_score_preference);
			break;
		case CLERIC:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&cleric_ability_score_preference);
			break;
		case DRUID:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&druid_ability_score_preference);
			break;
		case FIGHTER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&fighter_ability_score_preference);
			break;
		case MONK:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&monk_ability_score_preference);
			break;
		case PALADIN:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&paladin_ability_score_preference);
			break;
		case RANGER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&ranger_ability_score_preference);
			break;
		case ROGUE:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&rogue_ability_score_preference);
			break;
		case SORCERER:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&sorcerer_ability_score_preference);
			break;
		case WARLOCK:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&warlock_ability_score_preference);
			break;
		case WIZARD:
			random_ability_score = SelectRandomAbilityScoreWithWeight(&wizard_ability_score_preference);
			break;
		}

		if (character->getAbilityScore(random_ability_score) < 20)
		{
			character->AddToAbilityScore(random_ability_score, 1);
			ability_points--;
		}
	}
}

void AddAbilityPointsByRace(Character* character)
{
	switch (character->getRaceId())
	{
	case HUMAN:
		break;
	case ORC:
		character->AddToAbilityScore(STRENGTH, 2);
		break;
	case HALFLING:
		character->AddToAbilityScore(DEXTERITY, 2);
		break;
	case DRAGONBORN:
		break;
	case ELF:
		character->AddToAbilityScore(INTELLIGENCE, 2);
		break;
	}
}

void SelectTrainedSkillsByClass(Character* character)
{
	switch (character->getClassId())
	{
	case ARTIFICER:
		break;
	case BARBARIAN:
		BarbarianSkillOptions(character, 2);
		break;
	case BARD:
		break;
	case CLERIC:
		break;
	case DRUID:
		break;
	case FIGHTER:
		break;
	case MONK:
		break;
	case PALADIN:
		break;
	case RANGER:
		break;
	case ROGUE:
		break;
	case SORCERER:
		break;
	case WARLOCK:
		break;
	case WIZARD:
		break;
	}
}

void SelectTrainedSkillsByBackground(Character* character)
{
	switch (character->getBackground())
	{
	case HIGHLANDER:
		character->MarkSkillTrained(ATHLETICS, 1);
		character->MarkSkillTrained(NATURE, 1);
		break;
	}
}

void AddEquipmentByBackground(Character* character)
{
	switch (character->getBackground())
	{
	case HIGHLANDER:
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

int SelectRandomAbilityScoreWithWeight()
{
	return SelectRandomAbilityScoreWithWeight(&equal_ability_score_preference);
}

int SelectRandomAbilityScoreWithWeight(ABILITY_SCORE_PREFERENCE* absp)
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
		return STRENGTH;

	if (rand_num < strength_ratio + dexterity_ratio)
		return DEXTERITY;

	if (rand_num < strength_ratio + dexterity_ratio + constitution_ratio)
		return CONSTITUTION;

	if (rand_num < strength_ratio + dexterity_ratio + constitution_ratio + intelligence_ratio)
		return INTELLIGENCE;

	if (rand_num < strength_ratio + dexterity_ratio + constitution_ratio + intelligence_ratio + wisdom_ratio)
		return WISDOM;

	return CHARISMA;
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
	for (int i = 0; i < NUM_OF_ABILITY_SCORES; i++)
	{
		std::string num_of_tabs = "\t";
		if (i != CONSTITUTION && i != INTELLIGENCE)
			num_of_tabs += "\t";

		std::string str = GetAbilityScoreText(i) + "(" + std::to_string(i) + "):" + num_of_tabs;
		std::cout << str << character->getAbilityScore(i) << "\t\t" << character->getAbilityModifier(i) << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Proficiency Bonus: " << character->getProficiencyBonus() << std::endl;
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "---------------------" << std::endl;
	std::cout << "| Skills Trained in | " << std::endl;
	std::cout << "---------------------" << std::endl;
	for (int i = 0; i < NUM_OF_SKILLS; i++)
	{
		if (character->isTrainedInSkill(i))
			std::cout << " - " << GetSkillText(i) << std::endl;
	}

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "--------------" << std::endl;
	std::cout << "| Skill List |" << std::endl;
	std::cout << "--------------" << std::endl;
	for (int i = 0; i < NUM_OF_SKILLS; i++)
	{
		std::string num_of_tabs = "\t";

		if (i != ANIMAL_HANDLING && i != INTIMIDATION && i != INVESTIGATION && i != SLEIGHT_OF_HAND)
			num_of_tabs += "\t";

		std::cout << GetSkillText(i) << "(" << GetSKillType(i) << "):" << num_of_tabs << character->getSkillValue(i) << std::endl;
	}

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