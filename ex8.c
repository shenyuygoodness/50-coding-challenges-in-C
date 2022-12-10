#include <stdio.h>


float convert(float i);

float convert(float i)
{
	double Cel_Fah = (i * 9/5) + 32; 

	return Cel_Fah;
}

int main()
{
	float i = 12.6;
	printf("The temperature %f in Celsuis is %f in fahrenheit\n", i, convert(i));
	return 0;
}

