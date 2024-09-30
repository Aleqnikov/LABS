#include "min.h"

int min(int arr[], int len) {
    int min_el = arr[0];
    for (int j = 1; j < len; j++) {
        if (arr[j] <= min_el) min_el = arr[j];
    }
    return min_el;
}
