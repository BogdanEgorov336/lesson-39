#include "sort.h"

void bubble_sort(int* vector, int size) {

	for (int i = 0; i < size - 1; i++) {

		for (int x = 0; x < size - 1; x++) {

			if (vector[x] > vector[x + 1]) {
				swap(vector[x], vector[x + 1]);
			}
		}
	}

}

// CPU -> O(N*N)