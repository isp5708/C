#include<stdio.h>

int main() {
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	int i, j, tmp;

	for (i = 0; i < 9; i++) {
		j = i;
		while (array[j] > array[j + 1]&&j>=0) {
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = tmp;
			j--;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	
}
