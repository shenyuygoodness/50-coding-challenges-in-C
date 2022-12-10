#include <stdio.h>
int sumArray(int n, int arr[]);
int sumArray(int n, int arr[])
{
	int sum = 0;
	int i;
	for(i=0; i<n; i++){
		sum = sum + arr[i];
	}
	return sum;
}

int main()
{
	int arr[] = {4, 3, 1};
	int n = 3;
	printf("The sum of numbers in array %d\n", sumArray(n, arr));

	return 0;
}
