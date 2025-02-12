#include "sort.h"

void bubble_sort(int* vector, int size) {

	for (int i = 0; i < size - 1; i++) {

		bool flag = true;

		for (int x = 0; x < size - 1 - i; x++) {

			if (vector[x] > vector[x + 1]) {
				swap(vector[x], vector[x + 1]);
				flag = false;
			}
		}
		if (flag) {
			break;
		}
	}
}

// O(N^2) -> middle and the worst case
// O(N) -> the best case

void selected_sort(int* vector, int size) {

	for (int j = 0; j < size; j++) {

		int index = j;

		for (int i = j + 1; i < size; i++) {

			index = vector[i] < vector[index] ? i : index;
		}
		swap(vector[index], vector[j]);
	}
	
}

// O(N^2)