#include "Main.h"

using namespace std;


int main(int argc, char* argv[])
{
    int number_of_rolls = 20;
    int fromMinimum = 1;
    int toMaximum = 100;
    std::cout <<"Enter number of rolls :";
    cin >> number_of_rolls;
    std::cout <<"Enter number from min :";
    cin >> fromMinimum;
    std::cout <<"Enter number to max :";
    cin >> toMaximum;

    printf("Rolling dice %d from &d to %d \n", number_of_rolls, fromMinimum, toMaximum);
	Engine eng (fromMinimum, toMaximum);
    double average = 0.0;

	for (int i = 0; i < number_of_rolls; ++i) {
	    int random_roll = eng.spin();
		printf("You roll a %d \n", random_roll);
        average += (double) random_roll;
    }

    average /= number_of_rolls;

    printf("You average roll was %f \n ", average);

	return 0;
}
