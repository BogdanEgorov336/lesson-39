#include "util.h"
#include <time.h>
#include "sort.h"
#define SIZE 20

int main() {
	srand(time(NULL));

	int vector[SIZE]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	create_array_elements(vector, SIZE, -10, 10);

	cout << "Array before: " << convert_array_to_string(vector, SIZE) << endl;

	selected_sort(vector, SIZE);

	cout << "Array after: " << convert_array_to_string(vector, SIZE) << endl;

	system("pause");
	return 0;
}