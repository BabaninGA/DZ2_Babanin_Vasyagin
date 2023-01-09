#include "header(1-9).h"

int main() {

	// Task 1
	std::cout << "Task 1" << std::endl;
	int x1 = 4;
	int x2 = 3;
	std::cout << "Before swap ( " << x1 << " ; " << x2 << " )" << std::endl;
	swap(&x1, &x2);
	std::cout << "After swap ( " << x1 << " ; " << x2 << " )" << std::endl;


	// Task 2
	std::cout << "Task 2" << std::endl;
	int n = 5;
	int* a = new int[n] { 1, 2, 3, 4, 5 };
	std::cout << "Origin array: ";
	for (int i = 0; i < n; ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	int* pa = a;
	int* pla = a + n - 1;
	swap(pa, pla);
	std::cout << "Changed array: ";
	for (int i = 0; i < n; ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;


	// Task 3
	std::cout << "Task 3" << std::endl;
	double** p = 0;
	double* p0 = new double(2);
	p = &p0;
	std::cout << "The element in square: " << *p0 << std::endl;
	delete p0;


	// Task 4
	std::cout << "Task 4" << std::endl;
	int n_1 = 12;
	double* arr = new double[n_1] { 1.1, 2.2, 7.7, 8.8, 6.6, 9.9, 11.1, 3.3, 12.2, 4.4, 10.1, 5.5 };
	int counter = 0;
	selectionSort_descending_counter(arr, n_1, &counter);
	std::cout << "Elements of array in descending order: ";
	for (int i = 0; i < n_1; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout <<"Amount of permutations = " << counter << std::endl;


	// Task 5
	std::cout << "Task 5" <<std::endl;
	int n1 = 9;
	int* arr1 = new int[n1] {4, -4, 0, 1, -1, 2, 3, -2, -3};
	int* arr1r = new int[n1];
	result_array(arr1, arr1r, n1);
	std::cout << "Result array1: ";
	for (int i = 0; i < n1; ++i) {
		std::cout << arr1r[i] << " ";
	}
	std::cout << std::endl;

	int n2 = 5;
	double* arr2 = new double[n2] {2.2, 1.1, -8.8, -4.4, 5.5};
	double* arr2r = new double[n2];
	result_array(arr2, arr2r, n2);
	std::cout << "Result array2: ";
	for (int i = 0; i < n2; ++i) {
		std::cout << arr2r[i] << " ";
	}
	std::cout << std::endl;

	int n3 = 3;
	int* arr3 = new int[n3] {1703, -1147, 1221};
	int* arr3r = new int[n3];
	result_array(arr3, arr3r, n3);
	std::cout << "Result array3: ";
	for (int i = 0; i < n3; ++i) {
		std::cout << arr3r[i] << " ";
	}
	std::cout << std::endl;


	// Task 6
	std::cout << "Task 6" << std::endl;
	int n_2 = 14;
	double* array = new double[n_2] { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1, 11.1, 12.2, 13.3, 14.4 };
	array_change_halfs(array, n_2);
	std::cout << "Changed array: ";
	for (int i = 0; i < n_2; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;


	// Task 7
	std::cout << "Task 7" << std::endl;
	int n7 = 14;
	double* arr7 = new double[n7] { 1.1, 2.2, 7.7, 8.8, 6.6, 9.9, 11.1, 3.3, 12.2, 4.4, 10.1, 5.5, 14.4, 11.7};
	std::cout <<"Amount of local minimums = "<< local_min(arr7, n7) << std::endl;


	// Task 8
	std::cout << "Task 8" << std::endl;
	int n8 = 4;
	int m = 4;
	int** matrix = new int* [n8];
	matrix[0] = new int [m] { 1, 0, 0, 1 };
	matrix[1] = new int [m] { 1, 0, 1, 0 };
	matrix[2] = new int [m] { 1, 1, 0, 0 };
	matrix[3] = new int [m] { 0, 1, 1, 0 };
	for (int i = 0; i < n8; i++) {
		std::cout << "Sum of line " << i << " between zeros = " << sum_of_line(matrix[i]) << std::endl;
	}


	// Task 9
	std::cout << "Task 9" << std::endl;
	int n9 = 15;
	int* arr9 = new int[n9] {4, -4, 0, 1, -1, 2, 3, -2, -3, -7, -8, 9, 10, 12, -6};
	int* arr9r = new int[n9];
	int k = result_array(arr9, arr9r, n9);
	selectionSort_ascending(arr9r, 0, k);
	selectionSort_descending(arr9r, k, n9);
	std::cout << "Sorted result array: ";
	for (int i = 0; i < n9; ++i) {
		std::cout << arr9r[i] << " ";
	}

	return 0;
}