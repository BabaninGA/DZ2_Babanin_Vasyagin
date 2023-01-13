#include "header(13-15).h"

int main() {
	// Task 13
	cout << "Task 13\n";
	int m = 3;
	int n = 3;
	int* nums1 = new int[m + n] {1, 2, 3, 0, 0, 0};
	int* nums2 = new int[n] {2, 5, 6};
	merge(nums1, m, nums2, n);
	cout << "The result of the merge is: ";
	for (int i = 0; i < m + n; i++)
		cout << *(nums1 + i) << " ";
	cout << "\n";
	delete[] nums1;
	delete[] nums2;

	// Task 14
	cout << "\nTask 14\n";
	int days = 7;
	int* prices = new int[days] {7, 1, 5, 3, 6, 4};
	cout << "Max profit = " << max_profit(prices, days) << "\n";
	delete[] prices;

	// Task 15
	cout << "\nTask 15\n";
	int numRows = 0;
	cout << "Enter number of Rows: ";
	cin >> numRows;
	int** matrix_P_T = pascal_triangle(numRows);
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < 1 + i; j++)
			cout << matrix_P_T[i][j] << " ";
		cout << "\n";
	}
	for (int i = 0; i < n; i++)
		delete[] matrix_P_T[i];
	delete[] matrix_P_T;

	return 0;
}