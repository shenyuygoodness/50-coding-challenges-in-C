#include <stdio.h>


int main()
{
	int i;
	int j;
	int mul = 1;
	while(i <= 10){
		printf("Multiplication table for %d\n", i);
		for(j = 0; j<=12; j++){
			mul = i*j;
			printf("%d * %d = %d\n", i, j, mul);
		}
		i++;
	}
	return 0;
}
