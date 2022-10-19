#include <iostream>
#include <vector>

#include "CharacterCreator.h"

int main()
{
	CharacterCreationProcess(BARBARIAN, ORC, HIGHLANDER, LevelValidator(1), "Jeromash");
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	CharacterCreationProcess(CLERIC, DWARF, HIGHLANDER, LevelValidator(10), "Cringle");

	return 0;
}
