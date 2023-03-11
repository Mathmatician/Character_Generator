#pragma once
#include <random>

static int GenerateRandomNumber(int min, int max)
{
	std::random_device r;
	std::seed_seq seed{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 engine(seed);

	std::uniform_int_distribution<> dist(min, max);

	return dist(engine);
}
