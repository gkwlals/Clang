#include<stdio.h>

int main() {
	int arr[9] = { 7,9,2,21,30,19,18,23,11 };
	for (int i = 0; i < 8; i++) {
		int min_idx = i;
		for (int j = i + 1; j < 9; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}


	for (int i = 0; i < 9; i++) {
		printf("%d ", arr[i]);
	}




	return 0; 
}

