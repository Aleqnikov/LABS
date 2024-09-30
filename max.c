#include "max.h"

int max(int arr[], int len) {
    int max_el = arr[0];
    for (int j = 1; j < len; j++) {
        if (arr[j] >= max_el) max_el = arr[j];
    }
    return max_el;
}
