#include "Cleric.h"

Cleric::Cleric()
{
	class_ID = CLERIC;
	abilities_map = &CLERIC_ABILITY_LEVELS;
}