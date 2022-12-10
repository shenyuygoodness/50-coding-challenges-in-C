#include <stdio.h>


int main()
{
	int i = 10;
	int j = 0;
	int fac = 1;
	while(i>j){
		fac = fac*(i-j);
		j++;
	}
	printf("Factorial 10 is: %d\n", fac);
	return 0;
}
