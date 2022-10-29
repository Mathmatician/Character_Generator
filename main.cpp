#include <iostream>
#include <vector>

#include "CharacterCreator.h"

int main()
{
	CharacterCreationProcess(CLASSES::BARBARIAN, RACES::HUMAN, BACKGROUNDS::OUTLANDER, LevelValidator(10), "Jeromash");

	return 0;
}
