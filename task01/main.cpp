#include "util.h"
#include <time.h>
#include "sort.h"
#define SIZE 10

int main() {
	srand(time(NULL));

	int vector[SIZE];

	create_array_elements(vector, SIZE, 0, 10);

	cout << convert_array_to_string(vector, SIZE) << endl;

	bubble_sort(vector, SIZE);

	cout << convert_array_to_string(vector, SIZE) << endl;

	return 0;
}