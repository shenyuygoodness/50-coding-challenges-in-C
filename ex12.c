#include <stdio.h>

//int positiveNum(int arr[], int n );

int main()
//int arr[], int n)
{
	int i;
	int arr[1000] = {2, 5, 6, -1, 3, -8};
	int n = 6;
	// int temp;
	for(i = 0; i<n; i++){
		if(arr[i]>=0){
//			temp = arr[i];
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}

//int main()
//{
//	int arr[] = {2, 5, 0, -2, -5, 0};
//	int n = 6;
//	printf("Positive numbers are: %d\t", positiveNum(arr, n));
//
//	return 0;
//}
