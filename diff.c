#include "diff.h"
#include "max.h"
#include "min.h"

int diff(int arr[], int len){
   return max(arr, len) - min(arr, len);;
}