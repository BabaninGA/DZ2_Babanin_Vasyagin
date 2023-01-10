#pragma once

#include <iostream>
using namespace std;

// Task 13
void merge(int* nums1, int m, int* nums2, int n);

// Task 14
template <typename T>
T max_profit(T* prices, int days) {
	T current_min_price = prices[0];
	T max_profit = 0;
	T current_max_profit = 0;
	for (int i = 0; i < days; i++) {
		if (prices[i] < current_min_price) {
			current_min_price = prices[i];
		}
		current_max_profit = prices[i] - current_min_price;
		if (max_profit < current_max_profit) {
			max_profit = current_max_profit;
		}
	}
	return max_profit;
}

// Task 15
int** pascal_triangle(int n1);