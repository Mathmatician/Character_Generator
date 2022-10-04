#include <iostream>
#include <vector>

#include "CharacterClasses.h"

int main()
{
	Artificer Aron;
	Artificer Baron;

	Fighter Yuri;
	Fighter Dina;

	std::cout << Artificer::ABILITY_LEVEL(ABILITIES::SECOND_WIND) << std::endl;
	std::cout << Character::FEAT_LEVELS(FEATS::LINGUIST) << std::endl;

	return 0;
}