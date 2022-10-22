#include <iostream>
#include <vector>

#include "CharacterCreator.h"

int main()
{
	CharacterCreationProcess(CLASSES::BARBARIAN, RACES::HALF_ORC, BACKGROUNDS::OUTLANDER, LevelValidator(1), "Jeromash");

	return 0;
}
