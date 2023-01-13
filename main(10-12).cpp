#include "header(10-12).h"

int main() {
	// Task 10
	cout << "Task 10\n";
	int size_1 = 0;
	int size_2 = 0;
	double* arr_1 = 0;
	double* arr_2 = 0;

	cout << "\nEnter a size of the first array :\n";
	cin >> size_1;
	arr_1 = new double[size_1];
	for (int i = 0; i < size_1; i++) {
		cout << "arr_1[" << i << "] =";
		cin >> *(arr_1 + i);
	}

	cout << "\nEnter a size of the second array :\n";
	cin >> size_2;
	arr_2 = new double[size_2];
	for (int i = 0; i < size_2; i++) {
		cout << "arr_2[" << i << "] =";
		cin >> *(arr_2 + i);
	}

	cout << "\narr_1: ";
	for (int i = 0; i < size_1; i++)
		cout << *(arr_1 + i) << " ";
	cout << "\narr_2: ";
	for (int i = 0; i < size_2; i++)
		cout << *(arr_2 + i) << " ";

	change_max(arr_1, arr_2, size_1, size_2);

	cout << "arr_1: ";
	for (int i = 0; i < size_1; i++)
		cout << *(arr_1 + i) << " ";
	cout << "\narr_2: ";
	for (int i = 0; i < size_2; i++)
		cout << *(arr_2 + i) << " ";
	cout << "\n";
	delete[] arr_1;
	delete[] arr_2;


	// Task 11
	cout << "\nTask 11\n";
	int size_row, size_column;
	int** column;

	cout << "\nEnter row size:\n";
	cin >> size_row;
	cout << "Enter column size:\n";
	cin >> size_column;

	column = new int* [size_column];
	for (int i = 0; i < size_column; i++) {
		int* row = new int[size_row];
		*(column + i) = row;
		for (int k = 0; k < size_row; k++) {
			*(row + k) = rand() % 201 - 100;
		}
	}

	cout << "\nBefore:\n";
	for (int i = 0; i < size_row; i++) {
		for (int k = 0; k < size_column; k++) {
			cout << *(*(column + k) + i) << " ";
		}
		cout << "\n";
	}

	change_columns(column, size_column);

	cout << "\nAfter:\n";
	for (int i = 0; i < size_row; i++) {
		for (int k = 0; k < size_column; k++) {
			cout << *(*(column + k) + i) << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < size_column; i++) {
		delete[] * (column + i);
	}
	delete[] column;


	// Task 12
	cout << "\nTask 12\n";
	srand(time(NULL));

	int size_row2, size_column2, min_row2, max_row2;
	int** column2;

	cout << "Enter row size:\n";
	cin >> size_row2;
	cout << "Enter column size:\n";
	cin >> size_column2;

	column2 = new int* [size_column2];
	for (int i = 0; i < size_column2; i++) {
		int* row2 = new int[size_row2];
		*(column2 + i) = row2;
		for (int k = 0; k < size_row2; k++) {
			*(row2 + k) = rand() % 201 - 100;
		}
	}

	cout << "\nMatrix:\n";
	for (int i = 0; i < size_row2; i++) {
		for (int k = 0; k < size_column2; k++) {
			cout << *(*(column2 + k) + i) << " ";
		}
		cout << "\n";
	}

	min_max_row(column2, size_row2, size_column2, &min_row2, &max_row2);

	cout << "\nRow with MIN sum of elements: " << min_row2 << "\n";
	cout << "\nRow with MAX sum of elements: " << max_row2 << "\n";

	for (int i = 0; i < size_column2; i++) {
		delete[] * (column2 + i);
	}
	delete[] column2;

	return 0;
}