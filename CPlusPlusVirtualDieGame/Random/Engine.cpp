#include <random>
#include "Engine.h"

Engine::Engine(const int min, const int max) :	m_generator(std::random_device()()), m_distribution(min, max) {}

int Engine::spin() {
    return m_distribution(m_generator);
}
