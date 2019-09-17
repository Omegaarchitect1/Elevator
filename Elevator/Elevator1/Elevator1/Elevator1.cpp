// Elevator1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>



int main()
{
	bool exit = false;
	int currentFloor = 1;

	while(!exit)
	{
		int floors[] = { 1,2,3,4,5,6,7,8,9,10};
		
		int chosenFloor;
		int length = sizeof(floors) / sizeof(int);

		std::printf("Current Floor: ", currentFloor);
		std::printf("%d", currentFloor);
		std::printf("\n");
		std::printf("Please select your destination from floors 1 through 10.");
		std::printf("\n");
		std::printf("Exit(e)");
		std::printf("\n");
		scanf_s("%d", &chosenFloor);

		if (chosenFloor > currentFloor && chosenFloor < 11)
		{
			printf("Going up.");
			std::printf("\n");

			for (int i = currentFloor - 1; i < chosenFloor; i++)
			{
				printf("%d\n", floors[i]);
			}
			currentFloor = chosenFloor;
		}
		else if (chosenFloor < currentFloor && chosenFloor > 0)
		{
			printf("Going down.");
			printf("\n");
			for (int i = currentFloor - 1; i > chosenFloor; i--)
			{
				printf("%d\n", floors[i]);
			}
			currentFloor = chosenFloor;
		}
		else if (chosenFloor = currentFloor)
		{
			printf("You are already on this floor. Please select a destination.");
		}
		else if (chosenFloor > length || chosenFloor < 0 || chosenFloor != 0)
		{
			printf("Entry invalid, try again.");
		}
		else
		{
			exit = true;
		}		
	}
	
}


