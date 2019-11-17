#pragma once

class Car
{
public:
	Car();
	void accelerate(float intensity);
	void brake(float intensity);
	float getSpeed();
private:
	int speed;
};
