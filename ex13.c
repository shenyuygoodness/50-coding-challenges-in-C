#include <stdio.h>

int main()
{
	int arr[30] = {4, 2, 9, 36};
	int n = 4;
	int i;
	int max;
	for(i = 0; i<n; i++){
		max = arr[0];
		if(arr[0]<arr[i]){
			max = arr[i];
		}
	}
	printf("The maximum number is: %d\n", max);

	return 0;
}
