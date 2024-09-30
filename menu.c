#include <stdio.h>

#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"


void menu(int choice, int arr[], int size) {
    switch (choice) {
        case 0:
            printf("%d\n", max(arr, size));
            break;
        case 1:
            printf("%d\n", min(arr, size));
            break;
        case 2:
            printf("%d\n", diff(arr, size));
            break;
        case 3:
            printf("%d\n", sum(arr, size));
            break;
        default:
            printf("Данные некорректны\n");
            break;
    }
}

int main() {
    int choice;
    int arr[100];
    int size = 0;
    scanf("%d", &choice);
    while (scanf("%d", &arr[size]) == 1 && size < 100) {
        size++;
    }

    if(size == 0){
        printf("Данные некорректны\n");
        return 0;
    }

    menu(choice, arr, size);

    return 0;
}
