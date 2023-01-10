#include "header(10-12).h"

// Task 10
void change_max(double* arr_1, double* arr_2, int size_1, int size_2) {
    int max_1 = 0, max_2 = 0;
    for (int i = 0; i < size_1; i++) {
        if (i == 0) max_1 = i;
        else {
            if (*(arr_1 + i) > *(arr_1 + max_1)) max_1 = i;
        }
    }

    for (int i = 0; i < size_2; i++) {
        if (i == 0) max_2 = i;
        else {
            if (*(arr_2 + i) > *(arr_2 + max_2)) max_2 = i;
        }
    }

    cout << "\n\nChanging max values...\n\n";

    double tmp = 0;
    tmp = *(arr_1 + max_1);
    *(arr_1 + max_1) = *(arr_2 + max_2);
    *(arr_2 + max_2) = tmp;
}