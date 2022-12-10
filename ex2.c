#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	printf("Odd numbers from 1to100\n");
	for(i=1; i<=100; i++){
		if(i % 2 != 0){
			printf("%d\t", i);
		}
	}
	return 0;
}
