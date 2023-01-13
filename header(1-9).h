#pragma once

#include <iostream>

// Task 1
template <typename T>
void swap(T* p_a, T* p_b) {
	T* p_c = new T(*p_a);
	*p_a = *p_b;
	*p_b = *p_c;
	delete p_c;
}

// Taks 4
void selectionSort_descending_counter(double* arr, int arrSize, int* counter);

// Task 5
template <typename T>
int result_array(T arr1[], T arr2[], int n2) {
	int k_neg = 0;
	int k_pos = 0;
	arr2[0] = arr1[0];
	if (arr1[0] < 0)
		k_neg++;
	else
		k_pos++;
	for (int i = 1; i < n2; i++) {
		if (arr1[i] < 0) {
			T cur = arr2[k_neg];
			for (int j = k_neg; j < k_neg + k_pos - 1; j++) {
				T cur1 = arr2[j + 1];
				arr2[j + 1] = cur;
				cur = cur1;
			}
			arr2[k_neg + k_pos] = cur;
			arr2[k_neg] = arr1[i];
			k_neg++;
		}
		else {
			arr2[i] = arr1[i];
			k_pos++;
		}
	}
	return k_neg;
}

// Task 6
void array_change_halfs(double* array, int n_2);

// Task 7
template <typename T>
int local_min(T arr7[], int n7) {
	int counter = 0;
	for (int i = 0; i < n7 - 1; i++) {
		if (arr7[i] < arr7[i - 1] && arr7[i] < arr7[i + 1])
			counter++;
	}
	return counter;
}

// Task 8
template <typename T>
T sum_of_line(T* line) {
	T sum = 0;
	int i = 0;
	while (line[i] != 0) {
		i++;
	}
	i++;
	while (line[i] != 0) {
		sum += line[i];
		i++;
	}
	return sum;
}

// Task 9
void selectionSort_descending(int* arr, int idx_start, int idx_end);

void selectionSort_ascending(int* arr, int idx_start, int idx_end);


template <typename T>
void delete_matrix(T** matrix, int n) {
	for (int i = 0; i < n; i++)
		delete[] matrix[i];
	delete matrix;
}