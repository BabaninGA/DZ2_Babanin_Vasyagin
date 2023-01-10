#pragma once

using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>

// Task 10
void change_max(double* arr_1, double* arr_2, int size_1, int size_2);

// Task 11
template <typename T>
void change_columns(T* column, int size_column) {
    T tmp = 0;
    for (int i = size_column - 1; i > 0; i--) {
        if (i == size_column - 1) tmp = *(column + i);
        *(column + i) = *(column + (i - 1));
        if (i == 1) *(column + (i - 1)) = tmp;
    }
}

// Task 12
template <typename T>
void min_max_row(T** column2, int size_row2, int size_column2, int* min_row2, int* max_row2) {
    T sum2, min_sum2, max_sum2;
    for (int i = 0; i < size_row2; i++) {
        sum2 = 0;
        for (int k = 0; k < size_column2; k++) {
            sum2 += *(*(column2 + k) + i);
        }
        if (i == 0) {
            min_sum2 = sum2;
            max_sum2 = sum2;
            *min_row2 = i + 1;
            *max_row2 = i + 1;
        }
        else {
            if (sum2 < min_sum2) {
                min_sum2 = sum2;
                *min_row2 = i + 1;
            }
            if (sum2 > max_sum2) {
                max_sum2 = sum2;
                *max_row2 = i + 1;
            }
        }
    }
}