#include <stdio.h>


int main()
{
	int i;
	int sum = 0;
	for(i = 11; i<30; i++){
		if(i % 2 == 0){
			sum = sum + i;
		}
	}
	printf("The sum of even numbers between 10 and 30 is: %d", sum);

	return 0;
}
