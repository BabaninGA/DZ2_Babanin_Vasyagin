#include "header(1-9).h"

// Task 4
void selectionSort_descending_counter(double* arr, int arrSize, int* counter) {
	for (int i = 0; i < arrSize - 1; i++) {
		int cur_max_idx = i;
		double cur_max = arr[i];
		for (int j = i + 1; j < arrSize; j++) {
			if (arr[j] > cur_max) {
				cur_max_idx = j;
				cur_max = arr[j];
			}
		}
		if (cur_max_idx != i) {
			std::swap(arr[i], arr[cur_max_idx]);
			(*counter)++;
		}
	}
}

// Task 6
void array_change_halfs(double* array, int n_2) {
	n_2 = n_2 / 2;
	for (int i=0; i < n_2; i++)
		swap(array+i, array+n_2+i);
}

// Task 9
void selectionSort_descending(int* arr, int idx_start, int idx_end){
	for (int i = idx_start; i < idx_end - 1; i++) {
		int cur_max_idx = i;
		int cur_max = arr[i];
		for (int j = i + 1; j < idx_end; j++) {
			if (arr[j] > cur_max) {
				cur_max_idx = j;
				cur_max = arr[j];
			}
		}
		if (cur_max_idx != i) {
			std::swap(arr[i], arr[cur_max_idx]);
		}
	}
}

void selectionSort_ascending(int* arr, int idx_start, int idx_end) {
	for (int i = idx_start; i < idx_end - 1; i++) {
		int cur_min_idx = i;
		int cur_min = arr[i];
		for (int j = i + 1; j < idx_end; j++) {
			if (arr[j] < cur_min) {
				cur_min_idx = j;
				cur_min = arr[j];
			}
		}
		if (cur_min_idx != i) {
			std::swap(arr[i], arr[cur_min_idx]);
		}
	}
}