#include "util.h"
#include <time.h>
#include <string>

void create_array_elements(int* vector, int size, int a, int b) {
	srand(time(0));

	for (int i = 0; i < size; i++) {
		vector[i] = rand() % (b - a + 1) + a;
	}
}

string convert_array_to_string(int* vector, int size) {

	string string_array = "";

	for (int i = 0; i < size; i++) {

		string_array += to_string(vector[i]) + " ";
	}

	return string_array;
}