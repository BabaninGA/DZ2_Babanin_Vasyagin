#include "header(13-15).h"

// Task 13
void merge(int* nums1, int m, int* nums2, int n) {

	int i = m - 1, j = n - 1;
	while (i >= 0 && j >= 0) {
		if (nums1[i] >= nums2[j]) {
			nums1[i + j + 1] = nums1[i];
			i--;
		}
		else {
			nums1[i + j + 1] = nums2[j];
			j--;
		}
	}
	while (j >= 0) {
		nums1[j] = nums2[j];
		j--;
	}
}

// Task 15
int** pascal_triangle(int n1) {
	int** arr_P_T = new int* [n1];
	for (int i = 0; i < n1; i++) {
		int n1_c = 1 + i;
		arr_P_T[i] = new int[n1_c];
		if (i == 0 || i == 1)
			for (int j = 0; j < n1_c; j++)
				arr_P_T[i][j] = 1;
		else {
			arr_P_T[i][0] = 1;
			arr_P_T[i][n1_c - 1] = 1;
			for (int j = 1; j < n1_c - 1; j++)
				arr_P_T[i][j] = arr_P_T[i - 1][j - 1] + arr_P_T[i - 1][j];
		}
	}
	return arr_P_T;
}