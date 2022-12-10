#include <stdio.h>


int main()
{
	int i = 7;
	int j ;
	int mul = 1;
	for(j= 0; j<=12; j++){
		mul = i*j;
		printf("%d * %d = %d\t", i, j, mul);
	}
	return 0;
}
