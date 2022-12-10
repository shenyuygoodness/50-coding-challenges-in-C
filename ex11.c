#include <stdio.h>

double averageofArray(float arr[], int n);

double averageofArray(float arr[], int n)
{
	float sum = 0;
	float avg;
	int i;
	for(i = 0; i<n; i++){
		sum = sum + arr[i];
		avg = sum/2;
	}
	return avg;
}

int main()
{
	float arr[] = {4.0, 7.0, 2, 2};
	int n = 4;
	printf("The average is: %f\n", averageofArray(arr, n));
	return 0;
}
