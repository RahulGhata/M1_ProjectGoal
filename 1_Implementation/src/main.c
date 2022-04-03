//This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "helper.h"



/*
* print Menu
* @return choise
*/
int menu()
{
	int ch;
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5. Remainder");
	printf("\n6. Factorial");
	printf("\n7.log(base e)");
	printf("\n8.log(base 10)");
	printf("\n9.e^x");
	printf("\n10.SquareRoot");
	printf("\n11.CubeRoot");
	printf("\n12.Power");
	printf("\n13.Absolute Value");
	printf("\n14.Ceil Function");
	printf("\n15.Floor Function");
	printf("\n16.Clear");
	printf("\n17.Exit");
	printf("\nEnter your choice: ");

	scanf("%d", &ch);
	return ch;
}


// MAIN
int main()
{
	int l = 0;

	// Main execution loop
	while (1)
	{
		// Displaying the current results
		printf("\n    Old Decimal Result = %f", result);
		printf("\n    Old Integer Result = %lld", intResult);

		// Switch Menu
		switch (menu())
		{
		case 1: addition();
			k = 1;
			break;

		case 2: subtraction();
			k = 1;
			break;

		case 3: multiplication();
			k = 1;
			break;

		case 4: division();
			k = 1;
			break;

		case 5: mod();
			k = 1;
			break;

		case 6: factorial();
			k = 1;
			break;

		case 7:logBasee();
			k = 1;
			break;

		case 8:logBase10();
			k = 1;
			break;

		case 9:eToPowerX();
			k = 1;
			break;

		case 10:squareRoot();
			k = 1;
			break;

		case 11:cubeRoot();
			k = 1;
			break;

		case 12:power();
			k = 1;
			break;

		case 13:absolute();
			k = 1;
			break;

		case 14:ceilF();
			k = 1;
			break;

		case 15:floorF();
			k = 1;
			break;

		case 16:clear();
			break;

		case 17:l = 1;
			break;

		default:
			printf("\nInvalid Choice !");
		}
		// Waiting for a button to be pressed
		printf("\nPress any 0 to continue and 1 to stop\n");
		pause();
		scanf("%d",&l);
		clearscr();
		// To break out of this menu loop
		if (l == 1)
			break;
	}
}

