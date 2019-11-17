#include "Car.h"

const int ACCELERATION_FACTOR = 10;
const int BRAKING_FACTOR = 30;

Car::Car() {
	speed = 0;
}

void Car::accelerate(float intensity) {
	speed = speed + ACCELERATION_FACTOR * intensity;
}

void Car::brake(float intensity) {
	speed = speed - BRAKING_FACTOR * intensity;
}

float Car::getSpeed() {
	return speed;
}