#pragma once

#include <random>
class Engine
{
public:
	Engine(int min, int max);
	int spin();
private:
	std::mt19937 m_generator;
	std::uniform_int_distribution<int> m_distribution;
};
