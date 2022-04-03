#include<stdio.h>
#include<stdlib.h>
#include <math.h> 
#define PI 3.141592654

//result
long long intResult = 0;

//helper vars
double k = 0, result = 0;

/*
* add and store result in result var
*/
void addition()
{
	double a, b;
	if (k)
	{
		printf("\nEnter a number: ");
		scanf("%lf", &a);
		result += a;
		printf("\nResult = %lf", result);
	}
	else
	{
		printf("\nEnter two numbers: ");
		scanf("%lf%lf", &a, &b);
		result = a + b;
		printf("\nResult = %lf", result);
	}
}

// Function to subtract numbers
void subtraction()
{
	double a, b;
	if (k)
	{
		printf("\nEnter a number: ");
		scanf("%lf", &a);
		result -= a;
		printf("\nResult = %lf", result);
	}
	else
	{
		printf("\nEnter two numbers: ");
		scanf("%lf%lf", &a, &b);
		result = a - b;
		printf("\nResult = %lf", result);
	}
}

// Function to multiply numbers
void multiplication()
{
	double a, b;
	if (k)
	{
		printf("\nEnter a number: ");
		scanf("%lf", &a);
		result *= a;
		printf("\nResult = %lf", result);
	}
	else
	{
		printf("\nEnter two numbers: ");
		scanf("%lf%lf", &a, &b);
		result = a * b;
		printf("\nResult = %lf", result);
	}
}

// Function to divide numbers
void division()
{
	double a, b;
	if (k)
	{
		printf("\nEnter a number: ");
		scanf("%lf", &a);
		if (a != 0)
		{
			result /= a;
			printf("\nResult = %lf", result);
		}
		else
		{
			printf("Math Error\n");
		}
	}
	else
	{
		printf("\nEnter two numbers: ");
		scanf("%lf%lf", &a, &b);
		if (b != 0)
		{
			result = a / b;
			printf("\nResult = %lf", result);
		}
		else
		{
			printf("Math Error\n");
		}
	}
}

// Function to find remainder
void mod()
{
	long long a, b;
	if (k)
	{
		printf("\nEnter a number: ");
		scanf("%lld", &a);
		intResult %= a;
		printf("\nResult = %lld", intResult);
	}
	else
	{
		printf("\nEnter two numbers: ");
		scanf("%lld%lld", &a, &b);
		intResult = a % b;
		printf("\nResult = %lld", intResult);
	}
}

// Function to calculate factorial of a number
void factorial()
{
	long long n, f, i;
	printf("\nEnter a number: ");
	scanf("%lld", &n);
	f = 1;
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	intResult = f;
	printf("\nResult = %lld", intResult);
}
long long factorialReturn(long long n)
{
	long long f, i;
	f = 1;
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}

// Function to calculate log (base e)
void logBasee()
{
	double a;
	printf("Enter a number: ");
	scanf("%lf", &a);
	if (a <= 0.0)
	{
		printf("Math Error\n");
	}
	else
	{
		result = log(a);
		printf("\nResult = %lf", result);
	}
}

// Function to calculate log (base 10)
void logBase10()
{
	double a;
	printf("Enter a number: ");
	scanf("%lf", &a);
	if (a <= 0.0)
	{
		printf("Math Error\n");
	}
	else
	{
		result = log10(a);
		printf("\nResult = %lf", result);
	}
}

// Function to calculate e^x
void eToPowerX()
{
	double a;
	printf("Enter a number: ");
	scanf("%lf", &a);
	result = exp(a);
	printf("\nResult = %lf", result);
}

// Function to find the Square Root of a Number
void squareRoot()
{
	int n;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("Math Error\n");
	}
	else
	{
		result = sqrt(n);
		printf("\nResult = %lf", result);
	}
}

// Function to find the Cube Root of a Number
void cubeRoot()
{
	int n;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	result = cbrt(n);
	printf("\nResult = %lf", result);
}

// Function to find the Power of a Number
void power()
{
	double base, expo;
	printf("Enter a base number: ");
	scanf("%lf", &base);
	printf("Enter an exponent: ");
	scanf("%lf", &expo);
	result = pow(base, expo);
	printf("%.1lf^%.1lf = %.2lf", base, expo, result);
}

// Function to find the Absolute Value of a Number
void absolute()
{
	long long int n;
	printf("\nEnter a number: ");
	scanf("%lld", &n);
	intResult = abs(n);
	printf("\nResult = %lld", intResult);
}

// This function gives the smallest integer that is greater than or equal to Number
void ceilF()
{
	double n;
	printf("\nEnter a number: ");
	scanf("%lf", &n);
	result = ceil(n);
	printf("Ceiling integer of %.2f = %f", n, result);
}

// This function gives the largest integer that is smaller than or equal to Number
void floorF()
{
	double n;
	printf("\nEnter a number: ");
	scanf("%lf", &n);
	result = floor(n);
	printf("Floor integer of %.2f = %f", n, result);
}

// Function to reset global variables
void clear()
{
	printf("\nOld Data Cleared");
	intResult = 0;
	result = 0;
	k = 0;
}
void clearscr()
{
#ifdef _WIN32
	system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
	system("clear");
	//add some other OSes here if needed
#else
#error "OS not supported."
	//you can also throw an exception indicating the function can't be used
#endif
}

void pause()
{
#ifdef _WIN32
	system("pause");
#elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
	system("sleep 2");
	//add some other OSes here if needed
#else
#error "OS not supported."
	//you can also throw an exception indicating the function can't be used
#endif
}