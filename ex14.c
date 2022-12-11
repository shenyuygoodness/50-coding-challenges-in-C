#include <stdio.h>


int main()
{
	int i;
	int m = 1;
	int n = 0;
	int sum;
	printf("The fibonacci numbers are:\n ");
	printf("%d\n%d\n", n, m);
	for(i = 2; i<=9; i++){
		sum = n + m;
		printf("%d\n", sum);
		n = m;
		m = sum;
	}
	return 0;
}
