#include <stdio.h>


float convert(float i);

float convert(float i)
{
	double Cel_Fah = (i - 32) * 5/9;

	return Cel_Fah;
}

int main()
{
	float i = 54.68;
	printf("The temperature %f in fahrenheit  is: %f in Celsuis\n", i, convert(i));
	return 0;
}

